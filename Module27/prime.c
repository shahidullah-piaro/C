#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        int L, R, i = 3, count, c;

        scanf("%d %d", &L, &R);
        if(L==1)
            printf("1 ");
        for(L; L <= R; L++)
        {
            for(c = 2; c < L; c++)
            {
                if(L%c == 0)
                    break;
            }

            if(L == c)
            {
                printf("%d ", L);
            }
        }
        printf("\n");
    }
}
