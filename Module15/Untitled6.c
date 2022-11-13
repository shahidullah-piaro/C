#include<stdio.h>
#include<string.h>
int main()
{
        char a[10];
		char ch = 'a';
		a[8] = '\0';
		for(int i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		for(int i = 0; i<8; i++)
        {
            printf("%c",a[i]);
        }
		return 0;
}
