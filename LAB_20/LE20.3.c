#include<stdio.h>

struct complex {
    float real, imag;
};

int main() {
    struct complex c1, c2, res;
    char ch;

    printf("Enter the real and imaginary units of first complex number:\n");
    printf("First real = ");
    scanf("%f", &c1.real);
    printf("First Imaginary = ");
    scanf("%f", &c1.imag);

    printf("Enter the real and imaginary units of the second complex number:\n");
    printf("Second real = ");
    scanf("%f", &c2.real);
    printf("Second Imaginary = ");
    scanf("%f", &c2.imag);

    printf("You have entered 1st no. As = %.1f + %.1f i\n", c1.real, c1.imag);
    printf("You have entered 2nd no. As = %.1f + %.1f i\n", c2.real, c2.imag);

    while(1) {
        printf("What do you want to do?\n");
        printf("Press e for exit\n");
        printf("Press a for addition\n");
        printf("Press s for subtraction\n");
        printf("Press m for multiplication\n");
        printf("Press d for division: ");
        scanf(" %c", &ch);

        if(ch == 'e') {
            printf("Program exited..\n");
            break;
        }

        switch(ch) {
            case 'a':
                res.real = c1.real + c2.real;
                res.imag = c1.imag + c2.imag;
                break;

            case 's':
                res.real = c1.real - c2.real;
                res.imag = c1.imag - c2.imag;
                break;

            case 'm':
                res.real = c1.real*c2.real - c1.imag*c2.imag;
                res.imag = c1.real*c2.imag + c1.imag*c2.real;
                break;

            case 'd': {
                float denom = c2.real*c2.real + c2.imag*c2.imag;
                res.real = (c1.real*c2.real + c1.imag*c2.imag)/denom;
                res.imag = (c1.imag*c2.real - c1.real*c2.imag)/denom;
                break;
            }

            default:
                printf("Invalid choice\n");
                continue;
        }

        printf("Your ans is:\n");
        printf("%.1f + %.1f i\n", res.real, res.imag);
    }

    return 0;
}
