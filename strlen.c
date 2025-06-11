#include <stdio.h>
int main()
{
    char s1[10], s2[10];
    int i, count;
    printf("enter string to know its length : ");
    gets(s1);
    i = 0;
    while (s1[i] != '\0')
    {
        count++;
        i++;
    }
    printf("length of string is  : %d ", count);
    return 0;
}
