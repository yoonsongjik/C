#include<stdio.h>

void printN(int n);
void printNArr(int *n);
int main()
{
    int num = 1;
    printN(num);
    printf("%d\n",num);
    printNArr(&num);
    printf("%d\n",num);
}
void printN(int n)
{
    n = 2;
}
void printNArr(int *n)
{
    *n = 2;
}