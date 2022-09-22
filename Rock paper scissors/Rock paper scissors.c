#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int user;        //사용자가 낼꺼
    int com;          //컴퓨터가 낼꺼

    srand((unsigned)time(NULL));
    com = rand() % 3 + 1;

    printf("선택하시오(1: 가위 2:바위 3:보)");
    scanf("%d", &user);
    if( user == 1 && com == 3)
        printf("사용자가 이겼음");
    else if(user == 1 && com == 2)
        printf("컴퓨터가 이겼음");
    else if (user == 1 && com == 1)
        printf("둘이 비겼음");
    else if(user == 2 && com == 1)
        printf("사용자가 이겼음");
    else if (user == 2 && com == 3)
        printf("컴퓨터가 이겼음");
    else if (user == 2 && com == 2)
        printf("둘이 비겼음");
    else if(user == 3 && com == 2)
        printf("사용자가 이겼음");
    else if (user == 3 && com == 1)
        printf("컴퓨터가 이겼음");
    else if (user == 3 && com == 3)
        printf("둘이 비겼음");
    else
        printf("몰라유");

    return 0;

    

}