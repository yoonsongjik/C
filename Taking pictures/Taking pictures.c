#include<stdio.h>
int print_value(int n);
int main()
{
    int num;
    printf("���� �Է��Ͻÿ�(����� ����) : ");
    scanf("%d", &num);

    print_value(num);
}
int print_value(int n)
{
    int i;
    if(n>0)
    {
        for(i=0; i<=n; i++)
        {
            printf("*");
        }
    }


}