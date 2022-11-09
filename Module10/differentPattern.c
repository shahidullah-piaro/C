#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,j,k;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            k = (i+1)-j;
            printf("%d ",k);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
