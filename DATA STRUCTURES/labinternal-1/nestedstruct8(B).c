#include<stdio.h>

typedef struct {
    int horsepower;
    int torque;
} engine;

typedef struct {
    char brand[50];
    float price;
    engine eng;
} car;

int main() {
    car c;

    printf("Enter Car Brand: ");
    scanf("%s", c.brand);

    printf("Enter Price (in lakhs): ");
    scanf("%f", &c.price);

    printf("Enter Engine Horsepower: ");
    scanf("%d", &c.eng.horsepower);

    printf("Enter Engine Torque: ");
    scanf("%d", &c.eng.torque);


    printf("\n--- Super Car Details ---\n");
    printf("Brand: %s\n", c.brand);
    printf("Price: %.2f Lakhs\n", c.price);
    printf("Horsepower: %d HP\n", c.eng.horsepower);
    printf("Torque: %d Nm\n", c.eng.torque);

    return 0;
}
