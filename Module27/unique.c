#include <stdio.h>
#include <string.h>
int main()
{
    char S[100];
    fgets(S,sizeof(S),stdin);
    int length = strlen(S);
    int i,j,count=0,count2=0;
    for(i=0;S[i]!='\0';i++)
    {
        for(j=0;S[j]!='\0';j++)
        {
            if(S[i]==S[j])
            {
                S[j]==S[j+1];
                //printf("%c-%c\n",S[j],S[j+1]);
            }
            if(S[i]!=S[j])
            {
                count++;
                //printf("%c->\n",S[i]);
                //printf("%c ",S[j]);
            }
            //printf("%d\n",count);
        }
        if((length-1)==count)
        {
            count2++;
            //printf("%d\n",count);
        }
        count=0;
        //printf("%d\n",count2);
    }
    printf("%d",count2-1);
    return 0;
}
