//�迭 �̸��� �ϳ��� ������ �����̴�!

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
//int 4, double 8 �޸��Ҵ�Ǵ�ũ�Ⱑ�޶󼭶�µ��� ������