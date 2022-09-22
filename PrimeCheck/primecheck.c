#include<stdio.h>
void is_prime(int n);
int main()
{
    int n;
    is_prime(n);
}

void is_prime(int n)
{  
   int i;
   for (n=0; n<=100; n++)
   {
    for (i=2; i<=n; i++)
    {
        if(i%n==0)
            printf("");
        else
            printf("%d ",n);
    }
    
   }
   
}
// 1. 소수를 판단 하는 알고리즘
