#include<stdio.h>
int even(int num);
int absolute(int num);
int sign(int num);
int main()
{
    int num;
    printf("������ �Է��Ͻÿ� :");
    scanf("%d", &num);

    even(num);
    absolute(num);
    sign(num);


}

int even(int num)
{
    if(num % 2 == 0)
        printf("even()�� ��� : ¦��\n");
    else
        printf("even()�� ��� : Ȧ��\n");
}
int absolute(int num)
{
    if(num > 0)
    {
        printf("absolute() �� ��� : %d\n", num);
    }
    else if(num == 0)
        printf("���밪�� �����ϴ�");
    else if (num < 0)
        printf("absolute()�� ��� %d\n", num*(-1));
}
int sign(int num)
{
    if(num > 0)
        printf("sign() �� ��� : ���\n");
    else if(num == 0)
        printf("0�Դϴ�");
    else if (num < 0)
        printf("sign()�� ��� : ����\n");
}