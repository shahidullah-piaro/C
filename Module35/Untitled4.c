#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char* ptr;
    ptr = (char*) malloc(n*sizeof(char));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        for(i=0; i<=n; i++)
        {
            scanf("%c",(ptr+i));
        }
    }

    int uniqueCount=0;

    int freq[27];

    for(int i=1; i<=26; i++)
        freq[i]=0;

    for(int i=0; i<n; i++)
        freq[(ptr[i]-'a')+1]++;

    for(int i=0;i<27;i++)
    {
        if(freq[i]==1)
        {
            uniqueCount++;
        }
    }
    printf("%d",uniqueCount);
    free(ptr);
    return 0;
}
