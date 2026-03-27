#include <stdio.h>
#include <math.h>
void main() 
{
    int size;
    float sum = 0.0, mean, sd = 0.0;
    printf("Enter array size: ");
    scanf("%d", &size);
     float arr[size];
    printf("Enter %d elements: ",size);
    for(int i=0;i<size;i++) 
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    mean=sum/size;
    for(int i=0;i<size;i++)
    {
        sd +=pow(arr[i]-mean, 2);
    }
    sd = sqrt(sd/size);
    printf("Standard Deviation: %f", sd);
}
