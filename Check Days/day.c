#include<stdio.h>

int main(){
    int day;

    printf("¿ùÀÔ·Â : ");
    scanf("%d", &day);

    switch(day)
    {
        case 2 :
            day = 28;
            break;    
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            day = 30;
            break;
        default:
            day = 31;
        
    }
    printf("%d",day);

    return 0;
}