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
    printf("게임을 시작하시겠습니까? (시작 : 1을 입력하세요) :");
    scanf("%d", &choice);
    if (choice == 1)
    start();
}
int start()
{
    int user;
    printf("선택하시오(1: 가위 2:바위 3:보)");
    scanf("%d", &user);
    game(user);
}
int game(int user)
{
    int com;


    srand((unsigned)time(NULL));
    com = rand() % 3 + 1;
    
    if( user == 1 && com == 3)
        printf("이겼습니다");
    else if(user == 1 && com == 2)
        printf("졌습니다");
    else if (user == 1 && com == 1)
        printf("비겼습니다");
    else if(user == 2 && com == 1)
        printf("이겼습니다");
    else if (user == 2 && com == 3)
        printf("졌습니다");
    else if (user == 2 && com == 2)
        printf("비겼습니다");
    else if(user == 3 && com == 2)
        printf("이겼습니다");
    else if (user == 3 && com == 1)
        printf("졌습니다");
    else if (user == 3 && com == 3)
        printf("비겼습니다");
    else
        printf("몰라유");

        
}