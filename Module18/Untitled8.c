#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
        {
        char s1[100];
        char s2[100];
        scanf("%s",s1);

        int length = 0,i = 0,j = 0;
        while(s1[i]!='\0')
        {
            i++;
            length++;
        }
        i = 0;
        for(i=0;s1[i]!='\0';i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
                s1[i] += 32;
        }
        for(j=0,i=length-1; i>=0; i--,j++)
        {
           s2[j]=s1[i];
        }
        s2[j]='\0';
        int p = strcmp(s1,s2);
        if(p==0)
        {
            if(length<=7)
            {
                printf("Case #3: %s\n",s2);
            }else
            {
                printf("Case #2: %c%d%c\n",s2[0],length-2,s2[length-1]);
            }
        }else
        {
            printf("Case #1: Not Palindrome\n");
        }
        }
    return 0;
}
