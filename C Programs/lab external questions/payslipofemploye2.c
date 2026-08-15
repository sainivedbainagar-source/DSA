#include <stdio.h>

typedef struct emp {
    int eid;
    char des[20];
    char dep[20];
    char name[20];
    float bs;
} emp;

emp a;

int main() {
    float hra, da, gross;

    printf("Enter employee details (eid name des dep bs):\n");
    scanf("%d %s %s %s %f", &a.eid, a.name, a.des, a.dep, &a.bs);

    hra = a.bs * 0.24;
    da = a.bs * 0.05;
    gross = hra + da + a.bs;

    printf("eid = %d\nname = %s\ndes = %s\ndep = %s\nbs = %.2f\n",
           a.eid, a.name, a.des, a.dep, a.bs);

    printf("hra = %.2f\nda = %.2f\ngross = %.2f\n", hra, da, gross);

    return 0;
}
