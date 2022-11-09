#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    int input[T];
    for(i=0; i<T; i++)
    {
        scanf("%d%%",&input[i]);
    }
    for(i=0; i<T; i++)
    {
        printf("%d\n",input[i]);
    }
}
