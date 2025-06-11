// wap to copy string1 to string2

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10], s2[10];
    int i;
    printf("Enter String To Copy : ");
    gets(s1);
    i = 0;
    while (s1[i] != 0)
    {

        s2[i] = s1[i];
        i++;
    }
    s2[i] = 0;
    puts(s2);
    printf("Copied String Is : %s", s2);
    return 0;
}