#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    int input[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
    }
    int largestElement=input[0];

    for(i=0; i<n; i++)
    {
        if(input[i]>largestElement)
        {
            largestElement=input[i];
        }
    }
    int forHighestMark[n];
    for(i=0; i<n; i++)
    {
        if(input[i]<largestElement)
        {
            int newNumber = largestElement-input[i];
            forHighestMark[i] = newNumber;
        }else if(input[i]==largestElement)
        {
            int newNumber = 0;
            forHighestMark[i] = newNumber;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",forHighestMark[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
