#include <stdio.h>

int main(){
    int n = 0;
    int i = 0;
    int num = 0;
    int arr[100001]={0};
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        scanf("%d", &num);
        arr[num]++;
    }
    int sum_1 = 0;
    int sum_2 = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]==1){
            sum_1++;
        }
        else if(arr[i]>2){
            sum_2 += arr[i] - 2;
        }
    }
    int sum = 0;
    if(sum_1>sum_2){
        sum = (sum_1-sum_2+1)/2+sum_2;
    }   
    else{
        sum = sum_2;
    }
    printf("%d", sum);
    return 0;
}