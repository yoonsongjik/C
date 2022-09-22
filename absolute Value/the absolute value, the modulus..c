#include<stdio.h>
int even(int num);
int absolute(int num);
int sign(int num);
int main()
{
    int num;
    printf("정수를 입력하시오 :");
    scanf("%d", &num);

    even(num);
    absolute(num);
    sign(num);


}

int even(int num)
{
    if(num % 2 == 0)
        printf("even()의 결과 : 짝수\n");
    else
        printf("even()의 결과 : 홀수\n");
}
int absolute(int num)
{
    if(num > 0)
    {
        printf("absolute() 의 결과 : %d\n", num);
    }
    else if(num == 0)
        printf("절대값이 없습니다");
    else if (num < 0)
        printf("absolute()의 결과 %d\n", num*(-1));
}
int sign(int num)
{
    if(num > 0)
        printf("sign() 의 결과 : 양수\n");
    else if(num == 0)
        printf("0입니다");
    else if (num < 0)
        printf("sign()의 결과 : 음수\n");
}