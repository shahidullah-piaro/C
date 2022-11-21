#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char S[100];
    fgets(S,sizeof(S),stdin);
    int a,b;
    scanf("%d %d",&a,&b);
    int i = 0,total=0;
    while(S[i]!='\0')
    {
        if(S[i]=='+')
        {
            total += (a+b);
        }
        else if(S[i]=='*')
        {
            total += (a*b);
        }
        i++;
    }
    printf("%d",total);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
