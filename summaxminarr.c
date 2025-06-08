#include <stdio.h>
int main()
{
    int a[10] = {10, 15, 48, 46, 57, 84, 96, 54, 475, 49};
    int i, max, min, sum = 0;
    max = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nmax is : %d\n", max);
    min = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nmin is : %d\n", min);
    for (i = 0; i <= 9; i++)
    {
        sum = sum + a[i];
    }
    printf("\nsum is : %d \n", sum);
    return 0;
}