#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int uniqueArr[n];

    int uniqueArrIndex = 0;
    for(i=0;i<n;i++)
    {
        int select = arr[i];
        int found = 0;
        for(j=0;j<n;j++)
        {
            if(uniqueArr[j]==select)
            {
                found = 1;
            }
        }
        if(found==0)
        {
            uniqueArr[uniqueArrIndex]=select;
            uniqueArrIndex++;
        }
    }
    for(i=0;i<uniqueArrIndex;i++)
    {
        printf("%d ",uniqueArr[i]);
    }
}
