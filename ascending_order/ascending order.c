#include <stdio.h>
// 임의의 숫자  3 5 2 7 9 8 1 4 6 10 을 사용자에게 arr라는 배열에 입력받아서 거기에 숫자를 하나씩 입력받음
// 그 10개를 오름차순 정렬
// 정렬하시겠습니까 했을 때 1 오름차순 0 내림차순
//
//
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int check = 0;
    printf("정렬하시겠습니까?");
    scanf("%d", &check);

    // 오름차순
    if (check)
    {
        int number = arr[0];
        // 버블정렬
        for (int i = 0; i < 10; i++)
        {
            for (int ii = 0; ii < 10; ii++)
            {
                if (arr[ii] < arr[ii + 1])
                {
                    int swp = arr[ii];
                    arr[ii] = arr[ii + 1];
                    arr[ii + 1] = swp;
                }
            }
        }
    }
    // 내림차순
    else
    {
        int number = arr[0];
        // 버블정렬
        for (int i = 0; i < 10; i++)
        {
            for (int ii = 0; ii < 10; ii++)
            {
                if (arr[ii] > arr[ii + 1])
                {
                    int swp = arr[ii];
                    arr[ii] = arr[ii + 1];
                    arr[ii + 1] = swp;
                }
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}