#include<stdio.h>
double cal_area(double radius);
int main()
{
    double rad;
    printf("���� �������� �Է��Ͻÿ� : ");
    scanf("%lf", &rad);

    cal_area(rad);
}
double cal_area(double radius)
{
    printf("���� ������ %lf �Դϴ�",3.14*radius*radius);
}