#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 0;
    scanf("%d", &flag);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n;j++){
            if(a[i]+a[j]==flag){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    return 0;
}