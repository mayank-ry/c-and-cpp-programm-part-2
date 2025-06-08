#include <stdio.h>
int sum()
{
    int a, b;
    printf("enter a and b : ");
    scanf("%d%d", &a, &b);
    return a + b;
}
void main()
{
    int result = sum();
    printf("sum is : %d ", result);
}