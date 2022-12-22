#include<stdio.h>
int main()
{
    FILE *logFile = fopen("log.txt","a");
    FILE *inputFile = fopen("test.txt","r");
    if(inputFile==NULL)
    {
        fprintf(logFile,"Input file not found\n");
        return 0;
    }
    return 0;
}
