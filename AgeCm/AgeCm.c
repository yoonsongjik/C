#include<stdio.h>
int main()
{
    int cm,age;
    printf("Ű�� �Է��Ͻÿ�(cm): ");
    scanf("%d",&cm);
    printf("���̸� �Է��Ͻÿ�: ");
    scanf("%d",&age);

    if(cm >= 140 && age >= 10)
        printf("Ÿ�� �����ϴ�.");
    else
        printf("�˼��մϴ�.");
    
    return 0;
}