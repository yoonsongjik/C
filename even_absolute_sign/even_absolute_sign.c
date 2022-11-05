#include<stdio.h>
int even(int num);
int absolute(int num);
int sign(int num);
int main()
{
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d",&num);

    even(num);
    printf("even()의 결과 : ");
    if (even(num) == 1)
        printf("짝수\n");
    else if (even(num) == 0)
        printf("홀수\n");
    
    absolute(num);
    sign(num);
    printf("sign()의 결과 : ");
    if(sign(num) == -1)
        printf("음수\n");
    else if(sign(num) == 1)
        printf("양수\n");
    else
        printf("0\n");

}

int even(int num)
{
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}
int absolute(int num)
{
    if(num > 0)
        printf("absolute()의 결과 : %d\n", num);
    else if (num < 0)
        printf("absolute()의 결과  : %d\n", num*-1);
}
int sign(int num)
{
    if(num < 0)
        return -1;
    else if(num > 0)
        return 1;
    else
        return 0;
}