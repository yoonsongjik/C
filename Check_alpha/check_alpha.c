#include<stdio.h>
char alpha(char alp);
int main()
{
    char alp;
    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%c",&alp);

    alpha(alp);
}
char alpha(char alp)
{
    if(alp == 'a')
        printf("%c�� ���ĺ� �ҹ����Դϴ�");
}