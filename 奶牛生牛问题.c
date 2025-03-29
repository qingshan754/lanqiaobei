#include <stdio.h>
int main(){
    int a = 1, b1 = 0, b2 = 0, b3 = 0, year[55];
    int n = 0;
    year[0] = 0;
    year[1]=1;
    for (int i = 2; i < 55;i++){
        a += b3;
        year[i] = year[i - 1] + a;
        b3 = b2;
        b2 = b1;
        b1 = a;
    }
    while(1){
        scanf("%d\n", &n);
        if(n!=0){
            printf("%d\n", year[n]);
        }
        else{
            break;
        }
    }
        return 0;
}