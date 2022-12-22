#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,S;
    scanf("%d %d",&N,&S);
    for(int i=1;i<S;i++)
    {
        if((i*2)+N==S)
        {
            printf("%d",i);
            break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
