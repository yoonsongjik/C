#include<stdio.h>
double cal_area(double radius);
int main()
{
    double rad;
    printf("원의 반지름을 입력하시오 : ");
    scanf("%lf", &rad);

    cal_area(rad);
}
double cal_area(double radius)
{
    printf("원의 면적은 %lf 입니다",3.14*radius*radius);
}