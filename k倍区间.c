#include <stdio.h>
int main (){
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    int arr[100000] = {0};
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for (int i = 0; i < n;i++){
        for (int j = i ; j < n;j++){
            int sum =0;
            sum +=arr[j];
            if(sum%k==0){
                flag++;
            }
        }
    }
    printf("%d\n", flag);
    return 0;
}