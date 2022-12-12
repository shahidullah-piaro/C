#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int* p = &a;
    int* q = &b;

    printf("%d %d\n",*p,*q);
    return 0;
}
