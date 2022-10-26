#include<stdio.h>
int main()
{
    int i, N;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    for( i=1; i>=N; i++ ) //for( i=10; i>=1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
