#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int mainArray[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&mainArray[i]);
    }
    int reverseArray[n];
    for(int i = n-1,j=0;i>=0;i--,j++)
    {
        reverseArray[j] = mainArray[i];
    }
    for(int i = 0;i<n; i++)
    {
        printf("%d ",reverseArray[i]);
    }
}
