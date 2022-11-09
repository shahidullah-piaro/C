#include<stdio.h>
int main()
{
    int N=8,i,j;
    int ara[8] = {12,7,9,3,15,2,6,5};
    int sortedArray[8];


    int min,minIndex;
    for(j=0;j<N;j++)
    {
        min = ara[0];
        minIndex = 0;
        for(i=0;i<N;i++)
        {
            if(ara[i]<min)
            {
                min = ara[i];
                minIndex = i;
            }
        }
        sortedArray[j] = min;
        ara[minIndex] = 9999;
        for(i=0;i<N;i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",sortedArray[i]);
    }
    return 0;
}
