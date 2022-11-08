#include <stdio.h>
#include <string.h>

int strcmp (const char *p1, const char *p2)
{
    const unsigned char *s1 = (const unsigned char *) p1;
    const unsigned char *s2 = (const unsigned char *) p2;
    unsigned char c1, c2;
    do
    {
        c1 = (unsigned char) *s1++;
        c2 = (unsigned char) *s2++;
        if (c1 == '\0')
        {
            return c1 - c2;
        }
    }
    while (c1 == c2);
    return c1 - c2;
}

int main()
{
    char str1[20];
    char str2[20];
    fgets(str1, 20, stdin);
    fgets(str2, 20, stdin);
    unsigned char c1, c2;
    int i = 0;

    while (c1 == c2)
    {
        c1 = (unsigned char) str1[i];
        c2 = (unsigned char) str2[i];
        i++;
        if(c1 == '\0')
        {
            printf("%d\n", c1 - c2);
            break;
        }
    }
    
    printf("%d\n", c1 - c2);
    return 0;
}

