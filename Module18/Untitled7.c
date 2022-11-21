#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int L;
    scanf("%d",&L);
    for(int i=0;i<L;i++)
    {
        int N;
        scanf("%d",&N);
        char s1[N];
        scanf("%s",s1);

        int length = 0,i = 0;
        while(s1[i]!='\0')
        {
            i++;
            length++;
        }

        i = 0;
        int pair = 0;
        for(i=0; i<length; i++)
        {
            if(s1[i]!='\0')
            {
                if(s1[i]+s1[i+1]=='1'+'0' || s1[i]+s1[i+1]=='0'+'1')
                {
                    pair++;
                }
            }
        }
        printf("%d\n",pair);

    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
