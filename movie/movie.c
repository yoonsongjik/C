#include<stdio.h>
#define ROWS 10                             //행의 숫자 : 10
#define COLS 10                             //열의 숫자 : 10
int print_seats();                         //좌석 출력
int reservation_seats();                  //좌석 예약 , 몇명인지 먼저 받고
int seats[ROWS][COLS] = {0};                      //seats라는 행 10 열 10의 배열 생성


int main()
{
    int menu;                              //입력시 첫번째 메뉴 보여주는 함수
    while(1)
    {
        printf("좌석 보기 : 1\n");
        printf("좌석 예약 : 2\n");
        printf("종료 : 0\n");
        scanf("%d", &menu);
        if(menu == 1)
        {
            print_seats();
            continue;
        }
        else if(menu == 2)
        {
            reservation_seats();
            continue;
        }
        else if(menu == 0)
        {
            break;
        }
    }
}
int print_seats()
{

    printf("      ");
    for(int i=1; i<=10; i++)                //행보여주는 반복묵
        printf(" %d ", i);
    printf("\n");

    printf("      ");
    for(int i=0; i<30; i++)                 //선
        printf("-"); 
    printf("\n");

    for(int i=0; i<ROWS; i++)              //좌석배치 보여주기
    {
        
        printf("      ");
        printf("%d",i+1);
        
        for(int j= 0; j<COLS; j++)
        {
            printf(" %d ", seats[i][j]);   
        }
        printf("\n");
    }
    printf("\n");
}
int reservation_seats()
{
    int people, i, j, beforeres;

    print_seats();

    printf("몇 명을 예약하시겠습니까? : \n");
    scanf("%d",&people);
    for(int a=1; a<=people; a++)
    {
        print_seats();
        printf("%d명의 몇번째 열의 좌석을 예약하시겠습니까? : \n",a);
        scanf("%d", &i);
        printf("%d명의 몇번째 행의 좌석을 예약하시겠습니까? : \n",a);
        scanf("%d", &j);

        if(seats[i-1][j-1] == 0)
        {
            seats[i-1][j-1] = 1;
            print_seats();
        }
        else
        {
            printf("이미 예약된 좌석입니다\n");
            a--;                                        //반복문 다시 돌아가기위해서 a--
        }
    }
}