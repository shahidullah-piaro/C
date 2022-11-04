#include<stdio.h>
int main()
{
    int ara[105];
    int n,i;
    int evenCount = 0,oddCount = 0;
    int answer;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]%2==0)
        {
            evenCount++;
        }else
        {
            oddCount++;
        }
    }
    if(evenCount==1)
    {
        for(i=1;i<=n;i++)
        {
            if(ara[i]%2==0)
            {
                answer = i;
            }
        }
    }else
    {
        for(i=1;i<=n;i++)
        {
            if(ara[i]%2!=0)
            {
                answer = i;
            }
        }
    }
    printf("%d",answer);
    return 0;
}
