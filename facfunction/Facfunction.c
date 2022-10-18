#include<stdio.h>
int fac(int x);
int main()
{
    printf("%d\n",fac(5));
}

int fac(int x)
{
    if(x<=1)
        return 1;
    else
        return (x*fac(x-1));
}