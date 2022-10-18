#include<stdio.h>
#define SIZE 20
int binary_search(int list[], int, int key);
int main(void)
{   
    int key;
    int grade[SIZE] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};
    printf("Ž���� ���� �Է��Ͻÿ� : ");
    scanf("%d", &key);
    printf("Ž����� = %d\n", binary_search(grade, SIZE, key));

    return 0;
}

int binary_search(int list[], int n, int key)
{
    int low, high, middle;
    low = 0;
    high = n-1;
    while(low <= high)                          //���ڵ��� ���� ����������
    {
        printf("[%d %d]\n", low, high);         //���Ѱ� �������
        middle = (low+high)/2;                  //�߰���ġ ���
        if(key == list[middle])                 //��ġ�ϸ� ����
            return middle;
        else if (key > list[middle])            //�߰�����ũ��
            low = middle +1;                    //�������� low�� ����
        else
            high = middle -1;                   //�������� high�� ����
    }
    return -1;
}