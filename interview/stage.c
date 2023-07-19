int binary_num(unsigned int num)
{
    unsigned sum = 0,temp = 0;
    int i;
    for(i = 0;i<32;i++)
    {
        temp = num >> i;
        temp &= 0x1;
        if(temp)
            sum++;
    }
    return sum;
}