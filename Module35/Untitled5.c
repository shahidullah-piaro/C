#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        int S[N];
        for(int i=0; i<N; i++)
        {
            scanf("%d",&S[i]);
        }
        int count=0;
        for(int i=0; i<N; i++)
        {
            //printf("%d ",S[i]);
            for(int j=0; j<N; j++)
            {
                if(S[i]!=S[j])
                {
                    for(int k=1; k <= S[i] && k <= S[j]; k++)
                    {
                        // Checks if i is factor of both integers
                        printf("%d %d\n",S[i],S[j]);
                        if(S[i]%k==0 && S[j]%k==0)
                        {
                            int gcd=0;
                            gcd = k;
                            printf("%d\n",gcd);
                            if(gcd==1)
                            count++;
                        }
                    }
                }
            }
        }
        printf("%d",count);
    }
    return 0;
}
