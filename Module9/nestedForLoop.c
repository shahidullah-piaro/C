#include<stdio.h>
int main()
{
    int M;
    printf("Enter the value of M: ");
    scanf("%d",&M);
    int i, j;

    for(i=0;i<M;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
