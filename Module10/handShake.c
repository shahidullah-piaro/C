#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int N, max;
    scanf("%lld",&N);
    max = (N*(N-1))/2;
    printf("%lld",max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
