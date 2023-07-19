#include <stdio.h>
void mycmp(char *str1,char *str2);
int main()
{
    char a[64] = {' '};
    char b[64] = {' '};
    printf("请输入两个字符串：\n");
    gets(a);
    gets(b);
    printf("输入的两个字符串分别是：%s 、 %s\n",a,b);
    mycmp(a,b);
    return 0;    
}

void mycmp(char *str1,char *str2)
{
    int temp;
    while ((str1!= NULL) && (str1==str2))
    {
        str1++;
        str2++;
    }
    temp = str1-str2;
    if (temp == 0)
    {
        printf("两个字符大小一样\n");
    }
    else if (temp > 0)
    {
        printf("第一串字符更大\n");
    }
    else
    {
        printf("第二串字符更大\n");
    }
}
