#include<stdio.h>
int main()
{
    int time, age;

    printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
    scanf("%d %d", &time,&age);

    if(time <= 17)
    {
        if(age >= 12 && age <= 65)
            printf("����� 34000�� �Դϴ�.");
        else if(age >=3 && age < 12 || age > 65)
            printf("����� 25000�� �Դϴ�.");
        else
            printf("��¥�Դϴ�");
    }
    else if (time <=24)
        printf("����� 10000�� �Դϴ�.");
    
    return 0;
}