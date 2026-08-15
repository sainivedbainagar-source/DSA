#include<stdio.h>

typedef struct {
    char title[50];
    char author[50];
    float price;
    int edition;
    char publisher[50];
} book;

int main() {
    book b[5];
    int i;


    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Book %d\n", i+1);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);

        printf("Edition: ");
        scanf("%d", &b[i].edition);

        printf("Publisher: ");
        scanf("%s", b[i].publisher);
    }


    printf("\n--- Library Books ---\n");

    for(i = 0; i < 5; i++) {
        printf("\nBook %d Details:\n", i+1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %.2f\n", b[i].price);
        printf("Edition: %d\n", b[i].edition);
        printf("Publisher: %s\n", b[i].publisher);
    }

    return 0;
}
