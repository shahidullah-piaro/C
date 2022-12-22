#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int k;
    for(k=0;k<T;k++)
    {
        int N;
        scanf("%d",&N);
        int arr[N];
        for(int i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        int S;
        scanf("%d",&S);
        int flag=0;
        for(int i=0;i<N;i++)
        {
            printf("%d %d\n",arr[i],i+1);
            if(arr[i]==S)
            {
                printf("Case %d: %d\n",k+1,i+1);
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            printf("Case %d: Not Found\n",k+1);
        }
    }
}
