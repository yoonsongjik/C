#include<stdio.h>
double square(double num);
int main(void)
{
    //주어진 실수를 제곱하여 반환하는 함수 double square(double)
    double num;
    printf("정수를 입력하시오 : ");
    scanf("%lf",&num);

    square(num);
}
double square(double num)
{
    printf("주어진 정수 %lf 의 제곱근은 %lf 입니다",num,num*num);
}