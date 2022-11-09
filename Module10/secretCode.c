#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T,i,j;
    scanf("%d",&T);
    int N[T];
    for(i=0; i<T; i++)
    {
        scanf("%d",&N[i]);
    }
    int count = 0;
    for(i=0;i<T;i++)
    {
       for(j=2;j<N[i];j++)
            {
                if(N[i]%j==0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                printf("Yes\n");
            }else if(count!=0)
            {
                printf("No\n");
            }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
