#include<stdio.h>
int is_leap(int year);

int main()
{
    int year;
    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &year);
    is_leap(year);
    return 0;
}

int is_leap(int year)
{
    if( year % 4 == 0 && year % 100 != 0 || year%400 == 0)
    {
        printf("%d���� 366�� �Դϴ�.", year);
    }
    else
    {
        printf("%d���� 365�� �Դϴ�.", year);
    }
    
}