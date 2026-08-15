#include <stdio.h>

#define MAX 100

int graph[MAX][MAX] = {0};
int visited[MAX] = {0};
int queue[MAX];
int front = -1, rear = -1;
int n, e;

// Function to add an edge
void addEdge(int start, int end)
{
    graph[start][end] = 1;
    graph[end][start] = 1;   // For an undirected graph
}

// Enqueue function
void enqueue(int vertex)
{
    if (rear == MAX - 1)
        return;

    if (front == -1)
        front = 0;

    queue[++rear] = vertex;
}

// Dequeue function
int dequeue()
{
    if (front == -1 || front > rear)
        return -1;

    return queue[front++];
}

// BFS function
void BFS(int start)
{
    int current, i;

    visited[start] = 1;
    enqueue(start);

    printf("BFS Traversal: ");

    while (front <= rear)
    {
        current = dequeue();
        printf("%d ", current);

        for (i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                enqueue(i);
            }
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

    for (i = 0; i < e; i++)
    {
        printf("Enter edge %d (start end): ", i + 1);
        scanf("%d %d", &start, &end);

        addEdge(start, end);
    }

    printf("Enter the starting vertex for BFS traversal: ");
    scanf("%d", &start);

    BFS(start);

    return 0;
}
