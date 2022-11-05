#include<stdio.h>
int main()
{
    int first, second;

    scanf("%d",&first);
    scanf("%d",&second);

    printf("%d\n",first*(second%10));
    printf("%d\n",first*(second/10%10));
    printf("%d\n",first*(second/100));
    printf("%d\n",first*second);
}