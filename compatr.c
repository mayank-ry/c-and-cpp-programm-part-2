#include <stdio.h>
int main()
{
    char s1[100], s2[100], s3[100];
    int i, flag;
    printf("Enter String 1 : ");
    gets(s1);
    printf("Enter String 2 : ");
    gets(s2);
    i = 0;
    while (s1[i] != 0 && s2[i] != 0)
    {

        if (s1[i] == s2[i])
        {
            s3[i] = s1[i];
            flag = 1;
            i++;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        s3[i] = '\0';
        printf("Both Strings are same : ");
        puts(s3);
    }
    else
    {
        printf("Both Are not Same ");
    }
    return 0;
}
