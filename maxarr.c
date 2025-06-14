#include <stdio.h>
int main()
{
    int a[10];
    int i, max;
    printf("Enter Elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum Element Is : %d ", max);
    return 0;
}