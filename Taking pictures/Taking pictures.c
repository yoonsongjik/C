#include<stdio.h>
int print_value(int n);
int main()
{
    int num;
    printf("값을 입력하시오(종료는 음수) : ");
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