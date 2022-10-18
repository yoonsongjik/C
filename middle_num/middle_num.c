#include<stdio.h>
int main()
{
    int arr[7];
    int i, mid, j, temp;

    printf("배열 : ");
    for(i=0; i<=5; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("중간값 : ");
    scanf("%d",&mid);

    for(j=0; j<=5; j++)
    {
        printf("%d ",arr[j]);
        if(arr[j] < mid && arr[j+1] > mid)
            printf("%d ",mid);
    }

}