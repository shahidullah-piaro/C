#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d",&N,&M);
    int Arr[N+1][M+1];
    for(int i = 1;i<=N;i++)
    {
        for(int j = 1;j<=M;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    for(int i = 1;i<=N;i++)
    {
        for(int j = 1;j<=M;j++)
        {
            if(i==Arr[i][j] && j==Arr[i][j])
            {
                Arr[i][j] = Arr[i][j] + 3;
            }else if(i==Arr[i][j])
            {
                Arr[i][j] = Arr[i][j] + 2;
            }else if(j==Arr[i][j])
            {
                Arr[i][j] = Arr[i][j] + 1;
            }
        }
    }
    for(int i=1;i<=N;i++)
    {
        for( int j=1;j<=M;j++)
        {
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
