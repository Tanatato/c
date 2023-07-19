char *strcpy(char *strDest,const char *strSrc)
{
    if(strDest == NULL||)
        return NULL;        //因为null是空，没有地址的
    else if (strDest == strSrc)
    {
        return strDest;
    }
    char *tempprt = strDest;
    while ((*strDest++ = *strSrc++)!='\0')
    {
        ;
    }
    return tempprt;
}

int binary_search(int* arr,int key,int n)
{
    int low = 0;
    int hight = n-1;
    int mid;
    while (low<=hight)
    {
        mid = (low+hight)/2;
        if (arr[mid]<key)
        {
            low = mid + 1;
        }
        else if(arr[mid]>key)
        {
            hight = mid-1;
        }
        else
            return mid;
    }
    return -1;
}

void mycmp(char *str1,char *str2)
{
    int temp = 0;
    while ((str1!=NULL)&&(str1==str2))
    {
        str1++;
        str2++;
    }
    temp = str1-str2;
    if (temp>0)
    {
        printf("%s is bigger\n",str1)
    }
    else if(temp<0)
        printf("%s is bigger\n",str2);
    else
        printf(" is same big\n")
}

 void intToChar(int num,char *pval)
 {
    char str[100];
    int i,j;
    int val0=0,val1=0;
    val0 = num;
    for(i=0;i<100;i++)
    {
        val1 = val0%10;
        val0 = val0/10;
        str[i] = val1+'0';
        if(val0<10)
        {
            str[i+1] = val0 + '0';
            break;
        }
    }
    char temp;
    for(j=0;j<i;j++)
    {
        temp = pval[i-j];
        pval[i-j] = pval[j];
        pval[j] = temp;
    }
    pval[j+1] = '\0';
 }

 bool add(int a ,int b)
 {
    int *c = a+b;
    return ((a>0&&b>0&&(*c<a||*c<b))||(a<0&&b<0&&(*c>a||*c>b)));

 }