#include<stdio.h>
int main()
{
    int num, time=0;

    printf("몇단인가요? :");
    scanf("%d", &num);

    while(time<10)
    {
        printf("%d * %d = %d\n",num,time, num*time);
        time++;
    }

}