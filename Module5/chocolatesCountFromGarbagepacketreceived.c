#include<stdio.h>
int main()
{
    int n;
    printf("Number of Chocolates: ");
    scanf("%d", &n);
    int chocolates = n;
    int pack = n;

    while(pack>=4)
    {
        chocolates += (pack/4);
        pack = (pack/4)+(pack%4);
    }
    printf("Total Number of chocolates %d\n",chocolates);
    printf("Garbage pack remaining %d", pack);
}
