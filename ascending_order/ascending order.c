#include <stdio.h>
// ������ ����  3 5 2 7 9 8 1 4 6 10 �� ����ڿ��� arr��� �迭�� �Է¹޾Ƽ� �ű⿡ ���ڸ� �ϳ��� �Է¹���
// �� 10���� �������� ����
// �����Ͻðڽ��ϱ� ���� �� 1 �������� 0 ��������
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
    printf("�����Ͻðڽ��ϱ�?");
    scanf("%d", &check);

    // ��������
    if (check)
    {
        int number = arr[0];
        // ��������
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
    // ��������
    else
    {
        int number = arr[0];
        // ��������
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