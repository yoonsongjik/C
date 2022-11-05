#include<stdio.h>
int is_leap(int year);
int main(void)
{
    int year;
    printf("연도를 입력하시오 : ");
    scanf("%d",&year);
    is_leap(year);
}
int is_leap(int year)
{
    if(year % 4 == 0 && 4 % 100 != 0 || year % 400 == 0)
        printf("%d년은 윤년입니다",year);
    else 
        printf("%d년은 윤년이 아닙니다",year);
}