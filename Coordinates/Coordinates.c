#include<stdio.h>
int main()
{
    int x, y;
    
    printf("��ǥ (x y): ");
    scanf("%d %d",&x, &y);

    if(x>0 && y>0)
        printf("1��и�");
    else if(x>0 && y<0);
        printf("2��и�");
    else if(x<0 && y<0)
        printf("3��и�");
    else if(x<0 && y>0);
        printf("4��и�");
    else if(x==0 && y>0 || y<0)
        printf("y��");
    else if(x>0 || x<0 && y=0)
        printf("x��");
    else if (x==0 && y==0)
        printf("0�ĸ� 0");
    
    return 0
}