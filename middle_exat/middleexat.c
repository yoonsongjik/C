#include<stdio.h>
int digit(int a);
int main()
{
    int num;
    printf("������ �Է��ϼ���  ");
    scanf("%d",&num);
    digit(num);
}
digit(int a)
{
    if(a>10)
    {
        printf("%d",a/10);
    }
}
