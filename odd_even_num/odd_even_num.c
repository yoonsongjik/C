#include<stdio.h>
int main()
{
    int arr[6];
    int i, j ;
    printf("ÀÔ·Â : ");
    for (i=0; i<=5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("È¦¼ö : ");
    for(j=0; j<=5; j++)
    {
        if(arr[j]%2 == 1)
            printf("%d ",arr[j]);
    }
    printf("\nÂ¦¼ö :");
    for(j=0; j<=5; j++)
    {
        if(arr[j]%2 == 0)
            printf("%d ",arr[j]);
    }
}