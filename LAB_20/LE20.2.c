#include<stdio.h>

union type
{
    char term;
    int num;
    float deci;
};

void input1(union type c1)
{
    printf("Values entered one by one:\n");
    printf("Enter a character: ");
    scanf(" %c", &c1.term);
    printf("Character: %c\n", c1.term);
    printf("Enter an integer: ");
    scanf("%d", &c1.num);
    printf("Integer: %d\n", c1.num);
    printf("Enter a float: ");
    scanf("%f", &c1.deci);
    printf("Double: %.2f\n", c1.deci);
}

void input2(union type c2)
{
    printf("\nEnter a character, an integer, and a double all together:\n");
    scanf(" %c", &c2.term);
    scanf("%d", &c2.num);
    scanf("%f", &c2.deci);
    printf("Values entered all together:\n");
    printf("Character: %c\n", c2.term);
    printf("Integer: %d\n", c2.num);
    printf("Double: %.2f\n", c2.deci);
}

void main()
{
    union type c1, c2;
    input1(c1);
    input2(c2);
    
}
