#include<stdio.h>
int main()
{
    int x, y;
    
    printf("좌표 (x y): ");
    scanf("%d %d",&x, &y);

    if(x>0 && y>0)
        printf("1사분면");
    else if(x>0 && y<0);
        printf("2사분면");
    else if(x<0 && y<0)
        printf("3사분면");
    else if(x<0 && y>0);
        printf("4사분면");
    else if(x==0 && y>0 || y<0)
        printf("y축");
    else if(x>0 || x<0 && y=0)
        printf("x축");
    else if (x==0 && y==0)
        printf("0컴마 0");
    
    return 0
}