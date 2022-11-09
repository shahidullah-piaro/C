#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);

    int Roll[N];
    for(int i = 0; i<N; i++)
    {
        scanf("%d",&Roll[i]);
    }
    int K;
    scanf("%d",&K);

    int reverseArray[N];
    for(int i = K,j=0;i<=N;i++,j++)
    {
        reverseArray[j] = Roll[i];
    }
    for(int i = 0,j=N-K;i<K;i++,j++)
    {
        reverseArray[j] = Roll[i];
    }

    for(int i = 0;i<N; i++)
    {
        printf("%d ",reverseArray[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
