#include<stdio.h>
int main()
{
    int a;
    printf("Enter a non negative number: ");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("This is a Even Number");
    }
    else
    {
        printf("This is an odd Number");
    }

}
