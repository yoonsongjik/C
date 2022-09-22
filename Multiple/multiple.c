#include<stdio.h>
int is_multiple(int f,int s);

int main()
{
    int first, second;
    printf("첫번째 정수를 입력하시오 : ");
    scanf("%d", &first);
    printf("두번째 정수를 입력하시오 : ");
    scanf("%d", &second);

    is_multiple(first, second);
    return 0;
}
int is_multiple(int f,int s)
{
   if(f % s == 0)
    printf("%d는 %d의 배수입니다", f, s);
    else
        printf("%d 는 %d의 배수가 아닙니다", f, s);
}