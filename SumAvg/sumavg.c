#include<stdio.h>
int main()
{
    int first= 0, sum = 0, avg = 0, result = 0;
    
    
    printf("���ڸ� �Է��ϼ���: ");

    while (first >= 0)
    {
        avg++;

        scanf("%d", &first);
        
        sum += first;      
    }

    avg--;
    sum -= first;

    result = sum/avg;

    printf("%d",result);

    return 0;
}