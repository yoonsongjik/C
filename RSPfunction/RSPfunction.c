#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int menu();
int start();
int game(int user);
int main()
{
    menu();
}
int menu()
{
    int choice;
    printf("������ �����Ͻðڽ��ϱ�? (���� : 1�� �Է��ϼ���) :");
    scanf("%d", &choice);
    if (choice == 1)
    start();
}
int start()
{
    int user;
    printf("�����Ͻÿ�(1: ���� 2:���� 3:��)");
    scanf("%d", &user);
    game(user);
}
int game(int user)
{
    int com;


    srand((unsigned)time(NULL));
    com = rand() % 3 + 1;
    
    if( user == 1 && com == 3)
        printf("�̰���ϴ�");
    else if(user == 1 && com == 2)
        printf("�����ϴ�");
    else if (user == 1 && com == 1)
        printf("�����ϴ�");
    else if(user == 2 && com == 1)
        printf("�̰���ϴ�");
    else if (user == 2 && com == 3)
        printf("�����ϴ�");
    else if (user == 2 && com == 2)
        printf("�����ϴ�");
    else if(user == 3 && com == 2)
        printf("�̰���ϴ�");
    else if (user == 3 && com == 1)
        printf("�����ϴ�");
    else if (user == 3 && com == 3)
        printf("�����ϴ�");
    else
        printf("������");

        
}