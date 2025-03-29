#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int a = 0;
    int hash[256] = {0};
    for (long long unsigned int i = 0; i < strlen(s); i++)
    {
        if (hash[(unsigned char)s[i]] == 1)
        {
            a = 1;
            break;
        }
        hash[(unsigned char)s[i]] = 1;
    }
    if (a == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}