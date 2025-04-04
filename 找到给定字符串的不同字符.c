#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char arr1[100];
    char arr2[100];
    int hash1[256] = {0};
    int hash2[256] = {0};
    fgets(arr1, sizeof(arr1), stdin);
    arr1[strcspn(arr1, '\n')] = '\0'; // 移除了换行符
    fgets(arr2, sizeof(arr2), stdin);
    arr2[strcspn(arr2, '\n')] = '\0'; // 移除了换行符

    for (int i = 0; i < strlen(arr1); i++)
    {
        hash1[(unsigned char)arr1[i]]++;
    }

    for (int i = 0; i < strlen(arr2); i++)
    {
        hash2[(unsigned char)arr2[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (hash1[i] > hash2[i])
        {
            printf("%c", i);
        }
        else if (hash1[i] < hash2[i])
        {
            printf("%c", i);
        }
    }

    return 0;
}