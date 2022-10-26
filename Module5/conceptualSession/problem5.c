#include<stdio.h>
int main()
{
    int i, N;
    printf("Enter the positive value of N: ");
    scanf("%d",&N);

    for( i=1; i<=N; i++ ) //for( i=10; i>=1; i--)
    {
        if(N%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}


