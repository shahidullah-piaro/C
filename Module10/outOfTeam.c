
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,K,i,outOfTeam=0;
    scanf("%d %d",&N,&K);
    int arr[N];

    for(i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(arr[i]<K)
            {
                outOfTeam++;
            }
    }
    printf("%d",outOfTeam);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
