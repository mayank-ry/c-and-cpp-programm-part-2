#include <stdio.h>
void sum(int x, int y)
{
    printf("sum is : %d", x + y);
}
void main()
{
    int a, b;
    printf("enter a and b : ");
    scanf("%d%d", &a, &b);
    sum(a, b);
}