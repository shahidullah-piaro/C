#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);

        if(n1%n2==0)
        {
            printf("The first number %d is divisible by the second number %d",n1,n2);
        }else if(n2%n1==0)
        {
            printf("The second number %d is divisible by the first number %d",n2,n1);
        }else
        {
            printf("Divisible between %d and %d is not possible",n1,n2);
        }
    return 0;
}
