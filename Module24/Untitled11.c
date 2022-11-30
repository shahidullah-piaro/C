#include<stdio.h>
int main()
{
    char s[102];
    int i;
    fgets(s,sizeof(s),stdin);

    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] += 32;
            printf("%c",s[i]);
        }else if(s[i]>='a' && s[i]<'z')
        {
            s[i] -= 32;
            printf("%c",s[i]);
        }
    }
    return 0;
}
