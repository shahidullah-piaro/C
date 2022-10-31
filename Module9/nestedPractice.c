#include<stdio.h>
int main()
{
    int i,j,N,S;
    float x, sum, average;
    printf("Total students and subjects : ");
    scanf("%d%d",&N,&S);
    for(i=1;i<=N;i++)
    {
        printf("Enter marks of %d-th student: ",i);
        sum = 0.0;
        for(j=1;j<=S;j++)
        {
            scanf("%f",&x);
            sum = sum + x;
        }
        average = sum/S;
        printf("Average - %f\n",average);
    }
    return 0;
}
