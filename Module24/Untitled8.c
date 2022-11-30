#include<stdio.h>
int main()
{
    char s[102];
    int n,i;
    fgets(s,sizeof(s),stdin);
    scanf("%d",&n);
    for(i=0;i<strlen(s)-1;i++)
    {

            s[i] += n;
            if(s[i]>122)
            {
                s[i]-=26;
            }
            printf("%c",s[i]);
    }
    return 0;
}

