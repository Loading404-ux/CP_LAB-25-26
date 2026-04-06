#include<stdio.h>
#include<stdlib.h>

struct emp {
    char name[50], gender;
    char desig[50], dept[50];
    float basic, gross;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct emp *e = (struct emp*)malloc(n * sizeof(struct emp));

    for(int i=0; i<n; i++) {
        printf("-------------------------------------------\n");
        printf("Enter Employee %d Details:\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Designation: ");
        scanf(" %[^\n]", e[i].desig);

        printf("Department: ");
        scanf(" %[^\n]", e[i].dept);

        printf("Basic Pay: ");
        scanf("%f", &e[i].basic);

        e[i].gross = e[i].basic + 0.25*e[i].basic + 0.75*e[i].basic;
    }

    printf("------------------------------------------\n");
    printf("Name Gender Designation Department Basic Pay Gross Pay\n");

    for(int i=0; i<n; i++) {
        printf("%s %c %s %s %.0f %.0f\n",e[i].name, e[i].gender, e[i].desig,e[i].dept, e[i].basic, e[i].gross);
    }

    free(e);
    return 0;
}
