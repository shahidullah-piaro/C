#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        int N;
        char s;
        scanf("%d",&N);
        while(N!=0)
        {
            s = (N%10)+64;
            printf("%c",s);
            N=N/10;
        }
        printf("\n");
    }
    return 0;
}
