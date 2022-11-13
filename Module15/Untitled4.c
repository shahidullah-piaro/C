#include<stdio.h>
int main()
{
    int a[16]={1, 2, 4, 8, 16},i;
    for(i=1;i<16;i++)
    {
        if(i==1)
        {
            a[1] = 1;
        }else if(i==2)
        {
            a[1] = 1;
            a[2] = 2;
        }else if(i>2)
        {
            a[1] = 1;
            a[2] = 2;
            a[i] = a[i-1]*2;
        }
    }
    for(i=1;i<=15;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

