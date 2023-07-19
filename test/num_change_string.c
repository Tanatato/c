#include <stdio.h>
 void intToChar(int num, char *pval);
 int main()
{
    int num = 12345;
    char str[100];
     intToChar(num, str);
     printf("转换后的字符串为：%s\n", str);
     return 0;
}
 void intToChar(int num, char *pval)
{
    char str[100];
    int i, j;
    int val0 = 0;
    int val1 = 0;
    val0 = num;
    for (i = 0; i < 100; i++)
    {
        val1 = val0 % 10;
        val0 = val0 / 10;
        str[i] = val1 + '0';
        if (val0 < 10)
        {
            i++;
            str[i] = val0 + '0';
            break;
        }
    }
    char temp;
    for (j = 0; j <= i; j++)
    {
        temp = str[i-j];
        pval[i-j] = str[j];
        str[j] = pval[i-j];

    }
    pval[j] = '\0';
}