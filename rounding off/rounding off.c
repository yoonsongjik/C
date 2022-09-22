#include<stdio.h>
int round(double f);
int main()
{
    double num;

    printf("실수를 입력하시오 : ");

    scanf("%lf", &num);

   printf("반올림 값은 %d입니다",round(num));

    return 0;
}

int round(double f)
{

    return (int)(f+0.5);

}