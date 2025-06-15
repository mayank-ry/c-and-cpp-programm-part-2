#include <stdio.h>
int main()
{
    int a[10];
    int i, rev;
    printf("Enter string : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse Of Array Is : ");
    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}