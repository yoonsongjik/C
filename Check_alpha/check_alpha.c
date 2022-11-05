#include<stdio.h>
char alpha(char alp);
int main()
{
    char alp;
    printf("문자를 입력하시오 : ");
    scanf("%c",&alp);

    alpha(alp);
}
char alpha(char alp)
{
    if(alp == 'a')
        printf("%c는 알파벳 소문자입니다");
}