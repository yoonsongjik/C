#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num;
    int i = 1;
    int count = 0;

    srand((unsigned)time(NULL));

    while (i <= 100)
    {
    num = rand() % 5 + 1;
    
    if(num == 3)
        {
            count++;
        }
    i++;
    }
    printf("\n3�� %d�� ���Խ��ϴ�",count);
}