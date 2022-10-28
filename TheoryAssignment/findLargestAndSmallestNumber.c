#include<stdio.h>
int main()
{

    int n1,n2,n3,n4;
    printf("Enter 4 numbers\n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    int max = n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;
    printf("Largest = %d\n", max);
    int min = n1;
    if(n2 < min) min = n2;
    if(n3 < min) min = n3;
    if(n4 < min) min = n4;
    printf("Smallest = %d", min);
    return 0;
}
