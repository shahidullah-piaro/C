#include<stdio.h>
int main()
{
    int N = 5;
    int ara[N];
    int i;

    for(i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);
    }
    int Max = ara[0];

    for(i=0;i<N;i++)
    {
        if(ara[i]>Max)// ara[i]<Max for minimum value
        {
            Max = ara[i];
        }
    }
    printf("The Maximum value is %d\n",Max);
}
