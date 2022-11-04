#include<stdio.h>
int main()
{
    int t, ii;
    scanf("%d",&t);
    for(ii=1;ii<=t;ii++)
    {
        int n,i,maxNumber = 101;
        scanf("%d",&n);

        int input[n+1];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&input[i]);
        }

        int arr[maxNumber];
        for(i=0;i<maxNumber;i++)
        {
            arr[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            arr[input[i]]+=1;
        }
        int index;
        for(i=1;i<=n;i++)
        {
            if(arr[input[i]]==1)
            {
                index=i;
                break;
            }
        }
        printf("%d\n",index);
    }
    return 0;
}
