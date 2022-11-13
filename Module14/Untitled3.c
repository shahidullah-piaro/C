#include<stdio.h>
int main()
{
        int row=3,col=3;
        int a[row][col];
        for(int i=0;i<=row-1;i++)
        {
            for( int j=0;j<=col-1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        if(a[0][0] + a[0][1] + a[0][2]==15
        && a[1][0] + a[1][1] + a[1][2]==15
        && a[2][0] + a[2][1] + a[2][2]==15
        && a[0][0] + a[1][0] + a[2][0]==15
        && a[0][1] + a[1][1] + a[2][1]==15
        && a[0][2] + a[1][2] + a[2][2]==15
        && a[0][0] + a[1][1] + a[2][2]==15
        && a[0][2] + a[1][1] + a[2][0]==15)
        {
            printf("YES");
        }else
        {
            printf("NO");
        }

    return 0;
}
