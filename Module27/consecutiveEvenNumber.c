#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int N, numm;
        scanf("%d",&N);
        numm = (N - 12)/4;
        printf("%d %d %d %d\n",numm, numm+2, numm+4, numm+6);
    }
}
