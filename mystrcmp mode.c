#include <stdio.h>

void mycmp(char *str1,char *str2);

int main(int argc, char *argv[])
{ 
    char a[64]={0};
    char b[64]={0};
    printf("请输入两个字符串：");
    gets(a);
    gets(b);
    printf("输入的两个字符串分别是：%s %s\n",a,b);
    mycmp(a,b);
    return 0;
} 
void mycmp(char *str1,char *str2)
{
    int temp = 0;
    while((str1 != NULL)&&(str1 == str2))
    {
        str1++;
        str2++;
    }
    temp = str1-str2;
    if(0 == temp)
        printf("both are same big\n");
    else if(0 > temp)
        printf("%s is bigger\n",str1);
    else
        printf("%s is bigger\n",str2);
}
