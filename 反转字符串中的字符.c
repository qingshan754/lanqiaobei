#include <stdio.h>
#include <string.h>

int main(){
    char arr[100];
    // scanf("%s", arr);scanf遇到空格和换行会停止输入；可以使用 fgets(arr, sizeof(arr), stdin)
    // 防止溢出scanf("%99s", arr)
    // 最多读取99个字符，防止溢出
    // 如果需要处理中文，建议使用宽字符（wchar_t）或专门的字符串处理库

    fgets(arr, sizeof(arr), stdin);
    //去掉末尾的换行符
    arr[strcspn(arr, "\n")] = '\0';
    for (int i = strlen(arr) - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    return 0;
}