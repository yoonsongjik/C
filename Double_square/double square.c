#include<stdio.h>
double square(double num);
int main(void)
{
    //�־��� �Ǽ��� �����Ͽ� ��ȯ�ϴ� �Լ� double square(double)
    double num;
    printf("������ �Է��Ͻÿ� : ");
    scanf("%lf",&num);

    square(num);
}
double square(double num)
{
    printf("�־��� ���� %lf �� �������� %lf �Դϴ�",num,num*num);
}