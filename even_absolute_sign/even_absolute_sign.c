#include<stdio.h>
int even(int num);
int absolute(int num);
int sign(int num);
int main()
{
    int num;
    printf("������ �Է��Ͻÿ� : ");
    scanf("%d",&num);

    even(num);
    printf("even()�� ��� : ");
    if (even(num) == 1)
        printf("¦��\n");
    else if (even(num) == 0)
        printf("Ȧ��\n");
    
    absolute(num);
    sign(num);
    printf("sign()�� ��� : ");
    if(sign(num) == -1)
        printf("����\n");
    else if(sign(num) == 1)
        printf("���\n");
    else
        printf("0\n");

}

int even(int num)
{
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}
int absolute(int num)
{
    if(num > 0)
        printf("absolute()�� ��� : %d\n", num);
    else if (num < 0)
        printf("absolute()�� ���  : %d\n", num*-1);
}
int sign(int num)
{
    if(num < 0)
        return -1;
    else if(num > 0)
        return 1;
    else
        return 0;
}