#include<stdio.h>
int main(void)
{   
    int arr[9];
    int max, min, j;
    for(int i=0; i<9; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(j=0; j<9; j++)
    {
        if(max<arr[j])
        max=arr[j];
        if(min>arr[j])
        min=arr[j];
    }
    printf("%d, %d",max,min);


    return 0;
}