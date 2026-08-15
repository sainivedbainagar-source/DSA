#include <stdio.h>

typedef struct complex {
    int real;
    int img;
} Complex;

Complex add(Complex *c1, Complex *c2) {
    Complex c3;
    c3.real = c1->real + c2->real;
    c3.img  = c1->img + c2->img;
    return c3;
}

Complex sub(Complex *c1, Complex *c2) {
    Complex c3;
    c3.real = c1->real - c2->real;
    c3.img  = c1->img - c2->img;
    return c3;
}

Complex mul(Complex *c1, Complex *c2) {
    Complex c3;
    c3.real = (c1->real * c2->real) - (c1->img * c2->img);
    c3.img  = (c1->real * c2->img) + (c1->img * c2->real);
    return c3;
}

void print(Complex c) {
    printf("%d + i%d\n", c.real, c.img);
}

int main() {
    Complex c1, c2, c3;

    printf("Enter c1 \n");
    scanf("%d %d", &c1.real, &c1.img);

    printf("Enter c2 \n");
    scanf("%d %d", &c2.real, &c2.img);

    printf("Addition is\n");
    c3 = add(&c1, &c2);
    print(c3);

    printf("Subtraction is\n");
    c3 = sub(&c1, &c2);
    print(c3);

    printf("Multiplication is\n");
    c3 = mul(&c1, &c2);
    print(c3);

    return 0;
}
