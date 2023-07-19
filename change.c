#include <stdio.h>
#include <string.h>
char *rever(char *str);
int main(int argc, char *argv[])
{ 
    char a[64]={0};
    char *temp;
    printf("please input your str:");
    gets(a);
    printf("your str is:%s\n",a);
    temp=rever(a);
    printf("reverse is %s\n",temp);
    return 0;
} 

char *rever(char *str)
{
    int len = strlen(str);
    char b[64]={0};
    strcpy(b,str);
    char temp;
    for(int i=0;i<len/2;i++)
    {
        temp = b[i];
        b[i] = b[len-i-1];
        b[len-i-1] = temp;
    }
    strcpy(str,b);
    return str;
}
