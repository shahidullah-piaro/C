#include <stdio.h>
int main() {
    int n, i, sum = 0,plusValue=0,minusValue=0;

    scanf("%d", &n);


    for (i = 1; i <= n; ++i)
    {
            if(plusValue<3)
            {
                sum += i;
                plusValue++;
                if(plusValue==3)
                {
                    minusValue=0;
                }
                //printf("i:%d sum:%d plusValue:%d minusValue:%d\n",i, sum, plusValue, minusValue);
            }else if(minusValue<3)
            {
                sum -= i;
                minusValue++;
                if(minusValue==3)
                {
                    plusValue = 0;
                }
                //printf("i:%d sum:%d plusValue:%d minusValue:%d\n",i, sum, plusValue, minusValue);
            }
    }
    printf("%d\n",sum);

    return 0;
}

