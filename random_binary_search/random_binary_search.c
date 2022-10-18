#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int binarySearch(int arr[], int searchValue, int size);
void selectSort(int arr[], int desc, int size);

int main()
{
    // �õ� ����
    srand(time(NULL));

    // �迭 �����Ҵ�
    int *arr;
    static int size = 0;
    printf("�迭 ������ : ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));

    // �迭 �ʱ�ȭ
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 2000 + 1;

    // ���� �� �� ���
    printf("���� �� : ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    selectSort(arr, 1, size);
    printf("\n���� �� : ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    // ���� Ž�� ����
    int searchValue = 0;
    printf("\nŽ���� �� : ");
    scanf("%d", &searchValue);
    if (binarySearch(arr, searchValue, size) == -1)
        printf("�ش� ���� �������� �ʽ��ϴ�.\n");
    else
        printf("Ž�� ��� %d��° �ε����� �����մϴ�.\n", binarySearch(arr, searchValue, size));
}

int binarySearch(int arr[], int searchValue, int size)
{
    int low = 0, high = size - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        printf("[%d, %d]\n", low, high);
        mid = (low + high) / 2;
        // printf("%d\n", arr[mid]);

        if (searchValue == arr[mid])
            return mid;
        else if (arr[mid] < searchValue)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void selectSort(int arr[], int desc, int size)
{
    if (desc)
    {
        for (int i = 0; i < size - 1; i++)
        {
            int min = arr[i];
            int index = i;
            for (int j = i + 1; j < size; j++)
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    index = j;
                }
            }
            // swp
            int swp = arr[i];
            arr[i] = arr[index];
            arr[index] = swp;
        }
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            int max = arr[i];
            int index = i;
            for (int j = i + 1; j < size; j++)
            {
                if (max < arr[j])
                {
                    max = arr[j];
                    index = j;
                }
            }
            // swp
            int swp = arr[i];
            arr[i] = arr[index];
            arr[index] = swp;
        }
    }
}