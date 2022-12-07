#include<stdio.h>

int sum_of_digits(int a)
{
    int summ=0;
    while(a>0)
    {
        summ += (a%10);
        a /= 10;
    }
    return summ;
}

int is_prime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,sod;
    scanf("%d",&n);
    sod = sum_of_digits(n);
    if(is_prime(sod)==1)
    {
        printf("Prime Number\n");
        printf("%d\n",sod);
    }
    else
        printf("NO\n");
    return 0;
}
