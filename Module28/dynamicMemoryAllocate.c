#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    //ptr = (int*) calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d th position -> %d\n",i,*(ptr+i));
    }
    }

    //ptr = realloc(ptr,(n+5)*sizeof(int)); //For increasing memory location
    free(ptr);
    return 0;
}
