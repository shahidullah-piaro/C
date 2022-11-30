#include<stdio.h>
#include<string.h>

int find_Number(char s[], int size, int findingNumber)
{

    for(int i=0;i<size;i++)
        {
            if(s[i]==findingNumber)
            {
                return 1;
                break;
            }
        }

    return 0;
}

int main(void)
{
    char s[100];
    scanf(" %s", s);
    int length = strlen(s);

    int findNumberOne = find_Number(s, length, '1');
    int findNumberNine = find_Number(s, length, '9');
    int findNumberSeven = find_Number(s, length, '7');

    if(findNumberOne==1 && findNumberNine==1 && findNumberSeven==1)
    {
        printf("Yes");
    }else
    {
        printf("NO");
    }
}
