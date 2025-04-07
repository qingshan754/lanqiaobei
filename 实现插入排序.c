#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    int a[100] = {0};
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n;i++){
        int key = a[i];
        int j = i - 1;
        while (j>=0&&a[j]>key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}