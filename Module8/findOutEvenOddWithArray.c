#include<stdio.h>
int main()
{
    int N;
    int ara[100];
    int i;

    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);
    }

    int evenCount = 0;
    int oddCount = 0;

    for(i=0;i<N;i++)
    {
        if(ara[i]%2==0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Numbers of evens: %d\n",evenCount);
    printf("Numbers of odds: %d\n",oddCount);
}
