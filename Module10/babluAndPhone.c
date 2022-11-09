#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,i;
    scanf("%d",&T);
    char a;
    int input[T];
    for(i=0; i<T; i++)
    {
        scanf("%d%c",&input[i],&a);
    }
    int MinuteCount[T];
    for(i=0; i<T; i++)
    {
        if(input[i]<60)
        {
            int MinuteCounter;
            int oneMinuteCount = 60 - input[i];
            int twoMinuteCount = 20 * 2;
            int threeMinuteCount = 20 * 3;
            MinuteCounter = oneMinuteCount + twoMinuteCount + threeMinuteCount;
            MinuteCount[i] = MinuteCounter;
        }else if(input[i]<80)
        {
            int MinuteCounter;
            int oneMinuteCount = 80 - input[i];
            int twoMinuteCount = oneMinuteCount * 2;
            int threeMinuteCount = 20 * 3;
            MinuteCounter = twoMinuteCount + threeMinuteCount;
            MinuteCount[i] = MinuteCounter;
        }else if(input[i]>80)
        {
            int threeMinuteCount = (100 - input[i])*3;
            MinuteCount[i] = threeMinuteCount;
        }else if(input[i]==100)
        {
            int threeMinuteCount = (100 - 100)*3;
            MinuteCount[i] = threeMinuteCount;
        }else if(input[i]==0)
        {
            int threeMinuteCount = (100 - 100)*3;
            MinuteCount[i] = threeMinuteCount;
        }
    }
    for(i=0; i<T; i++)
    {
        printf("%d minutes\n",MinuteCount[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
