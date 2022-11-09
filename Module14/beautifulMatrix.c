#include<stdio.h>
int main()
{
    int i,j,x,y;
    int ara[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&ara[i][j]);
            if(ara[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }
    int row_change,col_change,answer;
    if(x>2)
    {
        row_change = (x-2);
    }else
    {
        row_change = (2-x);
    }
    if(y>2)
    {
        col_change = (y-2);
    }else
    {
        col_change = (2-y);
    }
    answer = row_change + col_change;
    printf("%d\n",answer);

    return 0;
}
