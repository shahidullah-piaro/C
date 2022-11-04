#include<stdio.h>
int main()
{
    int start, end,  timeZones;
    printf("Input start, end and timezone: ");
    scanf("%d %d %d",&start,&end,&timeZones);

    while(start!=end)
    {
        if(start>timeZones)
        {
            start = start % timeZones;
        }
        printf("%d ", start);
        start++;

        if(start == end)
        {
            printf("%d ", start);
        }
    }
}
