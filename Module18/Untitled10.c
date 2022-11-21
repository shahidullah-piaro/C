#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maximumEven(int a[],int length);

int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int result = maximumEven(a,N);
    printf("%d\n",result);
    return 0;
}

int maximumEven(int a[],int N)
{
    int max1=0;
    int max2=0;
    if(a[0]>a[1])
    {
        int max1 = a[0];
        int max2 = a[1];
    }else
    {
        int max1 = a[1];
        int max2 = a[0];
    }
    for(int i=2;i<N;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }else if(a[i]>max2 && a[i]<max1)
        {
            max2 = a[i];
        }
    }
    return (max1+max2);
}
