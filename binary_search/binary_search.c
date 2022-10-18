#include<stdio.h>
#define SIZE 20
int binary_search(int list[], int, int key);
int main(void)
{   
    int key;
    int grade[SIZE] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};
    printf("탐색할 값을 입력하시오 : ");
    scanf("%d", &key);
    printf("탐색결과 = %d\n", binary_search(grade, SIZE, key));

    return 0;
}

int binary_search(int list[], int n, int key)
{
    int low, high, middle;
    low = 0;
    high = n-1;
    while(low <= high)                          //숫자들이 아직 남아있으면
    {
        printf("[%d %d]\n", low, high);         //하한과 상한출력
        middle = (low+high)/2;                  //중간위치 계산
        if(key == list[middle])                 //일치하면 성공
            return middle;
        else if (key > list[middle])            //중간보다크면
            low = middle +1;                    //새값으로 low값 변경
        else
            high = middle -1;                   //새값으로 high값 변경
    }
    return -1;
}