#include<stdio.h>
int main()
{
    int M;
    printf("Enter the value of M: ");
    scanf("%d",&M);
    int i, j;
    i=0;
    while(i<M)
    {
        //Print 5 star
        j=0;
        while(j<i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
