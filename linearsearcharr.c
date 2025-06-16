#include <stdio.h>
int main()
{
    int a[10];
    int i, key;
    printf("Enter Elements : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Key To Search : ");
    scanf("%d", &key);
    for (i = 0; i < 5; i++)
    {
        if (key != a[i])
        {
            i++;
        }
        elif
        {
            printf("Key is found %d", key);
        }
        else
        {
            printf("key not found : %d", key);
        }
        return 0;
    }

    return 0;
}