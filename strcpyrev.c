#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, len;
    printf("Enter String : ");
    gets(s1);
    len = 0;
    while (s1[len] != 0)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        s2[i] = s1[len - 1 - i];
    }
    s2[i] = 0;
    printf("reversed is : ");
    puts(s2);

    return 0;
}