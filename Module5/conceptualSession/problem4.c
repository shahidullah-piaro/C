#include<stdio.h>
int main()
{
    int i, N, M;
    printf("Enter the positive value of N and M: ");
    scanf("%d %d",&N,&M);

    for( i=1; i<=N; i++ ) //for( i=10; i>=1; i--)
    {
        if(i%M==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}


