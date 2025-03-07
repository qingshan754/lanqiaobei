#include <stdio.h>
int main (){
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    for (; n > 0; n--){
        for (int m = n; m > 0;){
            if(m%2!=0){
                m /= 10;
            }
            else{
                break;
            }
            if(m%2==0){
                m /= 10;
            }
            else{
                break;
            }
            if(m==0){
                i++;
            }
        }
    }
    printf("%d", i);
        return 0;
}