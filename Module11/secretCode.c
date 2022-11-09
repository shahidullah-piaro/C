#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T,i,j;
    scanf("%d",&T);
    int input[T];
    for(i=0; i<T; i++)
    {
        scanf("%d",&input[i]);
    }
    char secretCodeTest[T];
    int count = 0;
    for(i=0;i<T;i++)
    {
       for(j=2;j<input[i];j++)
            {
                if(input[i]%j==0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                char secrectCode = 'Yes';
                secretCodeTest[i] = secrectCode;
            }else if(count!=0)
            {
                char secrectCode = 'No';
                secretCodeTest[i] = secrectCode;
            }
    }
    for(i=1;i<T;i++)
    {
        printf("%c\n",secretCodeTest[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
