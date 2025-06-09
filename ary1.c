// sum of all element in array
#include <stdio.h>
int main()
{
    int a[5], i, sum;
    printf("enter elements of array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = a[i] + a[i + 1];
        sum = sum + a[i];
        i++;
    }
    printf("sum is : %d", sum);

    return 0;
}