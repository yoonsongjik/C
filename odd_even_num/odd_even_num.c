#include<stdio.h>
int main()
{
    int arr[6];
    int i, j ;
    printf("�Է� : ");
    for (i=0; i<=5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Ȧ�� : ");
    for(j=0; j<=5; j++)
    {
        if(arr[j]%2 == 1)
            printf("%d ",arr[j]);
    }
    printf("\n¦�� :");
    for(j=0; j<=5; j++)
    {
        if(arr[j]%2 == 0)
            printf("%d ",arr[j]);
    }
}