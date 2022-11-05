#include<stdio.h>
#define ROWS 10                             //���� ���� : 10
#define COLS 10                             //���� ���� : 10
int print_seats();                         //�¼� ���
int reservation_seats();                  //�¼� ���� , ������� ���� �ް�
int seats[ROWS][COLS] = {0};                      //seats��� �� 10 �� 10�� �迭 ����


int main()
{
    int menu;                              //�Է½� ù��° �޴� �����ִ� �Լ�
    while(1)
    {
        printf("�¼� ���� : 1\n");
        printf("�¼� ���� : 2\n");
        printf("���� : 0\n");
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
    for(int i=1; i<=10; i++)                //�ຸ���ִ� �ݺ���
        printf(" %d ", i);
    printf("\n");

    printf("      ");
    for(int i=0; i<30; i++)                 //��
        printf("-"); 
    printf("\n");

    for(int i=0; i<ROWS; i++)              //�¼���ġ �����ֱ�
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

    printf("�� ���� �����Ͻðڽ��ϱ�? : \n");
    scanf("%d",&people);
    for(int a=1; a<=people; a++)
    {
        print_seats();
        printf("%d���� ���° ���� �¼��� �����Ͻðڽ��ϱ�? : \n",a);
        scanf("%d", &i);
        printf("%d���� ���° ���� �¼��� �����Ͻðڽ��ϱ�? : \n",a);
        scanf("%d", &j);

        if(seats[i-1][j-1] == 0)
        {
            seats[i-1][j-1] = 1;
            print_seats();
        }
        else
        {
            printf("�̹� ����� �¼��Դϴ�\n");
            a--;                                        //�ݺ��� �ٽ� ���ư������ؼ� a--
        }
    }
}