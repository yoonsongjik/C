#include<stdio.h>
int is_multiple(int f,int s);

int main()
{
    int first, second;
    printf("ù��° ������ �Է��Ͻÿ� : ");
    scanf("%d", &first);
    printf("�ι�° ������ �Է��Ͻÿ� : ");
    scanf("%d", &second);

    is_multiple(first, second);
    return 0;
}
int is_multiple(int f,int s)
{
   if(f % s == 0)
    printf("%d�� %d�� ����Դϴ�", f, s);
    else
        printf("%d �� %d�� ����� �ƴմϴ�", f, s);
}