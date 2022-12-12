#include<stdio.h>

int beautiful_array(int ara[],int N)
{
    int digitCount=0,numberCount=0;
    for(int i=0;i<N;i++)
    {
        while (ara[i] > 0)
        {
            if (ara[i] % 10 == 7)
            {
                numberCount++;
                break;
            }
            ara[i] = ara[i] / 10;
        }
    }
    return numberCount;
}

int main()
{
    int N;
    scanf("%d",&N);
    int ara[N],Ans;
    for(int i=0;i<N;i++)
    {
        scanf("%d",ara+i);
    }
    Ans = beautiful_array(ara,N);
    int count=0;
    if(N%2==1)
        {
            count = (N/2)+1;
        }
    else
        {
            count = N/2;
        }
    if(Ans==count)
        {
            printf("Beautiful\n");
        }
    else
        {
            printf("Ugly\n");
        }
}
