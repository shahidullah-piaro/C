#include<stdio.h>
int main()
{
    long long int num;
    int count=0;

    printf("Enter any integer : ");
    scanf("%d",&num);

    while(num!=0)
    {
        num = num/10;
        count++; // count = count +1;
    }
    printf("ll%d digits",count);
}
