#include<stdio.h>
int digit(int a);
int main()
{
    int num;
    printf("정수를 입력하세요  ");
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
