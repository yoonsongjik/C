#include<stdio.h>
int main()
{
    int month;

    printf("����ȣ�� �Է��Ͻÿ� : ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
            printf("Jun");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("Mar");
            break;
        case 4:
            printf("Apr");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("Jun");
            break;
        case 7:
            printf("Jul");
            break;
        case 8:
            printf("Aug");
            break;
        case 9:
            printf("Sep");
            break;
        case 10:
            printf("Oct");
            break;
        case 11:
            printf("Nov");
            break;
        case 12:
            printf("Dec");
            break;
        default :
            printf("�ٸ�����");
            break;        
    return 0;
    }
}