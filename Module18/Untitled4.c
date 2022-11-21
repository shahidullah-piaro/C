#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long int N;
    scanf("%ld",&N);
    long int value = 0;
    if(N%3==0)
    {
        value = N/3;
    }else
    {
        value = -1;
    }
    printf("%ld",value);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
