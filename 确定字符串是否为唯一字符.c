#include <stdio.h>
#include<string.h>
int main (){
    char s[101];
    int i, j, b;
    int a = 0;
    scanf("%s", s);
    b = strlen(s);
    for (int i = 0; i <b-1 ;i++){
        for (int j = i+1; j < b;j++){
            if(s[i]==s[j]){
                a = 1;
                break;
            }
        }
    }
    if (a == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
        return 0;
}