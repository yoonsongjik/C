#include<stdio.h>
int main()
{
    int king,queen,rook,knight,bishop,pawn;

    printf("Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù\n");
    scanf("%d %d %d %d %d %d",&king,&queen,&rook,&bishop,&knight,&pawn);

    if(king == 1)
        printf("0");
    else if(king == 0)
        printf("1");
    else
        printf("%d",1-king);
    if(queen == 1)
        printf("0");
    else if(queen == 0)
        printf("1");
    else
        printf("%d",1-queen);

    if(rook == 2)
        printf("0");
    else if(rook == 1)
        printf("1");
    else if(rook == 0)
        printf("2");
    else
        printf("%d",1-rook);

    if(bishop == 2)
        printf("0");
    else if(bishop == 1)
        printf("1");
    else if(bishop == 0)
        printf("2");
    else
        printf("%d",1-bishop);

    if(knight == 2)
        printf("0");
    else if(knight == 1)
        printf("1");
    else if(knight == 0)
        printf("2");
    else
        printf("%d",1-knight);
    
    if(pawn == 8)
        printf("0");
    else if(pawn == 7)
        printf("1");
    else if(pawn == 6)
        printf("2");
    else if(pawn == 5)
        printf("3");
    else if(pawn == 4)
        printf("4");
    else if(pawn == 3)
        printf("5");
    else if(pawn == 2)
        printf("6");
    else if(pawn == 1)
        printf("7");
    else if(pawn == 0)
        printf("8");
    else
        printf("%d",1-pawn);
    
    
}