//배열 이름은 하나의 포인터 변수이다!

#include<stdio.h>
int main()
{
    int Arr[30];

    for(int i = 0; i<30; i++)
    {
        *(Arr + (double)i ) = i+1;
        printf("%d ",*(Arr+i));
    }
}
//int 4, double 8 메모리할당되는크기가달라서라는데용 포인터