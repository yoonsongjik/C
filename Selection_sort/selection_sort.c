#include <stdio.h>
#define SIZE 10
int main()
{
    int list[SIZE] = {3, 2, 1, 4, 5, 6, 8, 7, 9, 0};
    int i, j, least, temp;

    for (i = 0; i < SIZE - 1; i++)
    {
        least = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (list[j] < list[least])
                least = j;
        }
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }
        for (i = 0; i < SIZE; i++)
            printf("%d ", list[i]);
        printf("\n");
        return 0;
}