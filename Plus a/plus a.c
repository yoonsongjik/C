#include<stdio.h>

int main(){

    int num, i, sum;
    sum = i = 0;

    printf("¹Ýº¹ È½¼ö : ");
    scanf("%d", &num);

    while(i <= num)
    {
        if (i%2==0){
            sum += i;
        }
            i++;

    }
    printf("%d\n", sum);
    return 0;
}