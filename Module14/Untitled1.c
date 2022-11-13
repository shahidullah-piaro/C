#include<stdio.h>
int main()
{
    int N=5,i,j,temp;
    int ara[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for(j=0;j<N;j++)
    {
        for(i=0;i<N-1; i++)
        {
            if(ara[i]>ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
            }
        }
    for(i=0;i<11;i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    }

    printf("\n");
    return 0;
}
