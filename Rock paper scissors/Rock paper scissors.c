#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int user;        //����ڰ� ����
    int com;          //��ǻ�Ͱ� ����

    srand((unsigned)time(NULL));
    com = rand() % 3 + 1;

    printf("�����Ͻÿ�(1: ���� 2:���� 3:��)");
    scanf("%d", &user);
    if( user == 1 && com == 3)
        printf("����ڰ� �̰���");
    else if(user == 1 && com == 2)
        printf("��ǻ�Ͱ� �̰���");
    else if (user == 1 && com == 1)
        printf("���� �����");
    else if(user == 2 && com == 1)
        printf("����ڰ� �̰���");
    else if (user == 2 && com == 3)
        printf("��ǻ�Ͱ� �̰���");
    else if (user == 2 && com == 2)
        printf("���� �����");
    else if(user == 3 && com == 2)
        printf("����ڰ� �̰���");
    else if (user == 3 && com == 1)
        printf("��ǻ�Ͱ� �̰���");
    else if (user == 3 && com == 3)
        printf("���� �����");
    else
        printf("������");

    return 0;

    

}