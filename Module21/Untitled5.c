#include<stdio.h>
#include<math.h>
int sevenPresent(int n);
int digitSum(int n);
int isPrime(int n);
int main()
{
    int n;
    scanf("%d",&n);

    if(sevenPresent(n)==1 && digitSum(n)>10 && isPrime(n)==1)
    {
        printf("Yes\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}
int sevenPresent(int n)
{
    while(n>0)
    {
        if(n%10 == 7)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}
int digitSum(int n)
{
    int summ = 0;
    while(n>0)
    {
        summ += (n%10);
        n /= 10;
    }
    return summ;
}
int isPrime(int n)
{
    int ld = n%10;
    if(ld==2 || ld == 3 || ld == 5 || ld == 7)
    {
        return 1;
    }else
    {
        return 0;
    }
}
