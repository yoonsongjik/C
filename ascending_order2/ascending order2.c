#include<stdio.h>
#define SIZE 10
int main()
{
    int list[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };       //SIZE 10이라는 index에 {}값을 넣는다
    int i, j, temp, least; 

    for(i=0; i<SIZE-1; i++)                             //i는 0부터 SIZE-1 (9)까지 증가하며 반복한다(제일큰수는 뒤로 가서 비교할 필요 X)
    {
        least = i;
        for(j = i+1; j<SIZE; j++)
        {
            if(list[j]<list[least])
                least =j;
        }
        temp = list[i];                     //temp 와 least의 값을 바꾸기 위해
        list[i] = list[least];
        list[least] = temp;
    }
    for (i=0; i<SIZE; i++)
        printf("%d", list[i]);
    printf("\n");
    return 0;
}