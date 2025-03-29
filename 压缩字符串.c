#include <stdio.h>
#include <string.h>
int main (){
    char str[501];
    scanf("%s", str);
    int len = strlen(str);
    int hash[256] = {0};
    for (int i = 0; i < len;i++){
        hash[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < len;i++){
        if(hash[(unsigned char)str[i]]==1){
            printf("%c", str[i]);
        }
        else if(hash[(unsigned char)str[i]]>1){
            printf("%c%d", str[i], hash[(unsigned char)str[i]]);
        }
        hash[(unsigned char)str[i]] = 0;
    }
        return 0;
}