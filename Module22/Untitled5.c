#include<stdio.h>

int gcd(int m, int n)
{
    int i;
    for(i=m;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
        {
            return i;
        }
    }

}

int lcm(int m, int n)
{
    int i;
    for(i=m;;i++)
    {
        if(i%m==0 && i%n==0)
        {
            return i;
        }
    }

}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = gcd(a,b);
    int ans2 = lcm(a,b);
    printf("GCD is %d\n",ans);
    printf("LCM is %d\n",ans2);
    return 0;
}
