#include <stdio.h>

#define MAX 100

int graph[MAX][MAX] = {0};
int visited[MAX] = {0};
int n, e;

// Function to add an edge
void addEdge(int graph[MAX][MAX], int start, int end)
{
    graph[start][end] = 1;
    graph[end][start] = 1;
}

// DFS function
void DFS(int graph[MAX][MAX], int visited[MAX], int vertices, int start)
{
    int i;

    printf("%d ", start);      // Print current vertex
    visited[start] = 1;        // Mark it as visited

    // Visit all adjacent vertices
    for(i = 0; i < vertices; i++)
    {
        if(graph[start][i] == 1 && visited[i] == 0)
        {
            DFS(graph, visited, vertices, i);
        }
    }
}

int main()
{
    int start, end, i;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the number of edges: ");
    scanf("%d", &e);

    // Input edges
    for(i = 0; i < e; i++)
    {
        printf("Enter edge %d (start end): ", i + 1);
        scanf("%d %d", &start, &end);

        addEdge(graph, start, end);
    }

    printf("Enter the starting vertex for DFS traversal: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    DFS(graph, visited, n, start);

    return 0;
}
