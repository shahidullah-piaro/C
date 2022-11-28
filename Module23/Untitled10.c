#include<stdio.h>

int get_string_size(char s[])
{
    int size = 0;

    for(int i=0;s[i]!='\0';i++)
        size++;

    return size;
}

void solve(void)
{
    char s[100];
    scanf(" %s", s);

    int string_size = get_string_size(s);

    printf("%s this word size = %d\n", s, string_size);
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}
