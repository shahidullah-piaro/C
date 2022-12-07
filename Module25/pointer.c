#include<stdio.h>
int main()
{
    int a = 12345;
    int* p;
    p = &a;
    int ara[3] = {5,6,7};


    printf("%p\n",ara);
    printf("%p\n",(ara+1));
    printf("%p\n",(ara+2));
    printf("%p\n",p);
    printf("%d\n",*p);
    return 0;
}
