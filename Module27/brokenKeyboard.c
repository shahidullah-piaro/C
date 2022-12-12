#include <stdio.h>
int main()
{
    char sen[1000];
    scanf("%s",sen);
    for(int i=0;sen[i]!='\0';i++)
    {
        if((i+1)%2==0)
        {
            printf("%c",sen[i]);
            printf("%c",sen[i]);
        }else
        {
            printf("%c",sen[i]);
        }
    }
    return 0;
}
