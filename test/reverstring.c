#include <stdio.h>
#include <string.h>
 char* reverse(char *str) {
    int len = strlen(str);
    int i;
    char temp;
    for (i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return str;
}
 int main() {
    char str[] = "Hello, tingting!";
    printf("原始字符串: %s\n", str);
    reverse(str);
    printf("逆序字符串: %s\n", str);
    return 0;
}