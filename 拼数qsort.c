#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARR_SIZE 100

int compare(const void *a, const void *b)
{
    char a_b[MAX_ARR_SIZE], b_a[MAX_ARR_SIZE];
    sprintf(a_b, "%s%s", (char *)a, (char *)b);
    sprintf(b_a, "%s%s", (char *)b, (char *)a);

    return strcmp(b_a, a_b);
}

int main()
{
    int n;
    scanf("%d", &n);
    char a[n][MAX_ARR_SIZE];
    for (int i = 0; i < n; i++)
        scanf("%s", a[i]);

    qsort(a, n, sizeof(a[0]), compare);

    for (int i = 0; i < n; i++)
        printf("%s", a[i]);

    return 0;
}