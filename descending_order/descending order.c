#include<stdio.h>
int main()
{
    int arr[7];
    int raa[7];
    int i,j;

    printf("�Է� : ");
    for(i=0; i<=6; i++)
    {
        scanf("%d",&arr[i]);  
    }
    for(j=i-1; j>=0; j--)
    {
        printf("%d ",arr[j]);
    }
}