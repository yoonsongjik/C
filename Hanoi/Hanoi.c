#include<stdio.h>
int fac(int x);
int main()
{   
    int x;
    printf("숫자를 입력하시오 : ");
    scanf("%d",&x);
    printf("%d",fac(x));
}

int fac(int x)
{
    if(x<=1)
        return 1;
    else
        return (x*fac(x-1));
}
