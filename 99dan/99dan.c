#include<stdio.h>
int main()
{
    int num, time=0;

    printf("����ΰ���? :");
    scanf("%d", &num);

    while(time<10)
    {
        printf("%d * %d = %d\n",num,time, num*time);
        time++;
    }

}