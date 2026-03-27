#include <stdio.h>

void main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter %d elements of source array: ",n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter %d elements of destination array: ",n);
    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    printf("\nSource array before swapping:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nDestination array before swapping: ");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
    int *p = a;
    int *q = b;
    int temp;
    for(int i=0;i<n;i++) 
    {
        temp=*(p+i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }
    printf("\nSource array after swapping: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nDestination array after swapping:");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
}
