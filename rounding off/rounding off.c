#include<stdio.h>
int round(double f);
int main()
{
    double num;

    printf("�Ǽ��� �Է��Ͻÿ� : ");

    scanf("%lf", &num);

   printf("�ݿø� ���� %d�Դϴ�",round(num));

    return 0;
}

int round(double f)
{

    return (int)(f+0.5);

}