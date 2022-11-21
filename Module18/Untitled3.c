#include<stdio.h>
int main()
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
    int max = 0;
    for(i=0; i<length-2; i++)
    {
        int pair = 1;
        if(s1[i]==s1[i+1])
        {
            pair++;

        }else if(pair>max)
        {
            max = pair;
        }

        if(pair>max)
        {
            pair=1;
        }
    }
    printf("%d\n",max);

    return 0;
}
