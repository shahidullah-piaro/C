#include<stdio.h>
int main()
{
    char s1[100];
    scanf("%s",s1);

    int length = 0,i = 0;
    while(s1[i]!='\0')
    {
        i++;
        length++;
    }
    i = 0;
    for(i=length-1; i>=0; i--)
    {
        printf("%c ",s1[i]);
    }
    return 0;
}
