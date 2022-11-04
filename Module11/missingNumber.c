
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d",&T);
    int sum,missingNumber;
    for(int i=1;i<=T;i++)
    {
        int S,A,B,C;
        scanf("%d %d %d %d",&S,&A,&B,&C);
        sum = A+B+C;
        missingNumber = S - sum;
        printf("%d\n",missingNumber);
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
