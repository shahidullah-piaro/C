#include<stdio.h>

int sum_of_odd_odd_even_even(int a[],int N)
{
    int sum = 0;
    for(int i=0;i<N;i++)
    {
        if((i+1)%2==0 && a[i]%2==0 || (i+1)%2==1 && a[i]%2==1)
        {
            int count;
            count = (i+1)+a[i];
            sum = sum + count;
        }
    }
    return sum;
}

int main()
{
    int N;
    scanf("%d",&N);
    int ara[N];
    int i,Ans;

    for(i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);
    }
    Ans = sum_of_odd_odd_even_even(ara,N);
    printf("%d",Ans);
}
