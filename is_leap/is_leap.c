#include<stdio.h>
int is_leap(int year);
int main(void)
{
    int year;
    printf("������ �Է��Ͻÿ� : ");
    scanf("%d",&year);
    is_leap(year);
}
int is_leap(int year)
{
    if(year % 4 == 0 && 4 % 100 != 0 || year % 400 == 0)
        printf("%d���� �����Դϴ�",year);
    else 
        printf("%d���� ������ �ƴմϴ�",year);
}