#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int main()
{
    int list[SIZE];       //SIZE 10�̶�� index�� {}���� �ִ´�
    int i, j, k,temp, least;

    srand((unsigned)time(NULL));
    for(k=0; k<=10; k++)
        list[k] = rand() % 100;

    for(i=0; i<SIZE-1; i++)                             //i�� 0���� SIZE-1 (9)���� �����ϸ� �ݺ��Ѵ�(����ū���� �ڷ� ���� ���� �ʿ� X)
    {
        least = i;
        for(j = i+1; j<SIZE; j++)
        {
            if(list[j]<list[least])
                least =j;
        }
        temp = list[i];                     //temp �� least�� ���� �ٲٱ� ����
        list[i] = list[least];
        list[least] = temp;
    }
    for (i=0; i<SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");
    return 0;
}