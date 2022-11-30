#include <stdio.h>

void swap(int *p,int *q) {
   int t;

   t=*p;
   *p=*q;
   *q=t;
}

void sort(int a[],int n) {
   int i,j,temp;

   for(i = 0;i < n;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

   sort(a,n);
    if(n%2==1)
    {
        n = (n+1) / 2 - 1;      // -1 as array indexing in C starts from 0

        printf("Median = %d ", a[n]);
    }else if(n%2==0)
    {
        int m;
        n = (n) / 2 - 1;
        m = (a[n]+a[n+1])/2;
        printf("Median = %d", m);
    }


   return 0;
}
