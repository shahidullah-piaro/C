#include<stdio.h>
int main()
{
    // swaps the contents of two variables
    int a=5, b=13;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d", a, b);
}
