#include<stdio.h>
int main()
{
    long long int n,i,moves = 0;
    long long int ara[200003];
    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(i=1;i<n;i++)
    {
        if(ara[i]<ara[i-1])
        {
            moves += (ara[i-1] - ara[i]);
            ara[i] = ara[i-1];
        }
    }
    printf("%lld\n",moves);
    return 0;
}
