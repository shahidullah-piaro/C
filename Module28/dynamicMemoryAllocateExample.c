#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5,i;
    //scanf("%d",&n);
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    printf("%p\n",ptr);
    //ptr = (int*) calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0; i<n; i++)
        {
            printf("%d th position -> %d\n",i,*(ptr+i));
        }
    }
    n = 10;
    ptr = realloc(ptr, n*sizeof(int));
    printf("%p\n",ptr);
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else
    {
        for(i=5; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0; i<n; i++)
        {
            printf("%d th position -> %d\n",i,*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}
