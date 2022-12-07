#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int K;
    scanf("%d",&K);

    int Roll[N+1];
    for(int i = 0,j=0; i<N+1; i=i+2,j++)
    {

        Roll[j] = i;
    }
    for(int i = 1,j=N/2+1; i<N+1; i=i+2,j++)
    {

        Roll[j] = i;
    }



    for(int i = 1;i<N+1; i++)
    {
        printf("%d ",Roll[i]);
    }
    printf("\n");
    printf("The %dth element in this sequence is %d.",K, Roll[K]);
    return 0;
}
