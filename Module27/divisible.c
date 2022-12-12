#include<stdio.h>

int divisible_by_3(int a[],int N)
{
    int count = 0;
    for(int i=0;i<N;i++)
    {
        if(a[i]%3==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        return -1;
    }else
    {
        return count;
    }
}

int divisible_by_5(int a[],int N)
{
    int count = 0;
    for(int i=0;i<N;i++)
    {
        if(a[i]%5==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        return -1;
    }else
    {
        return count;
    }
}

int divisible_by_both(int a[],int N)
{
    int count = 0;
    for(int i=0;i<N;i++)
    {
        if(a[i]%5==0 && a[i]%3==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int N;
    scanf("%d",&N);
    int ara[N];
    int i,Ans1,Ans2,Ans3;

    for(i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);
    }
    Ans1 = divisible_by_3(ara,N);
    Ans2 = divisible_by_5(ara,N);
    Ans3 = divisible_by_both(ara,N);
    if(Ans1+Ans2==-2)
        printf("-1");
    else
    printf("%d",(Ans1+Ans2)-Ans3);
}

