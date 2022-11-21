#include<stdio.h>
int main()
{
    int row = 8, col = 8;
    int chess[row][col];
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            chess[i][j]=0;
        }
    }
    int input_number;
    scanf("%d",&input_number);
    while(input_number--)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        chess[r][c] = 1;
    }
    for(int i=0;i<row;i++)
    {
        int count = 0;
        for(int j=0;j<col;j++)
        {
            if(chess[i][j]=1)
            {
                count++;
            }
        }
        if(count>1)
        {
            for(int j=0;j<col;j++)
            {
                chess[i][j] = 0;
            }
        }
        printf("%d",count);
    }

}
