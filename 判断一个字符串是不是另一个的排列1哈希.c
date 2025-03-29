#include<stdio.h>
#include<string.h>
int main(){
    char str1[101], str2[101];
    scanf("%s %s", str1,str2);
    int hash[256] = {0};
    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 != len2){
        printf("NO\n");
        return 0;
    }
    //The char num in str1 
    for (int i = 0; i < len1;i++){
        hash[(unsigned char)str1[i]]++;
    }
    //The char num in str2
    for (int i = 0;i<len2;i++){
        if(--hash[(unsigned char)str2[i]] < 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}