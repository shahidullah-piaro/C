#include<stdio.h>

int prime_number(int a[],int N)
{
    int primeCount=0;
    int *ptr = &a;
    for(int i=0;i<N;i++)
    {
		  int flag = 0;
		  for(int j=2; j <= a[i]/2; j++)
		  {
			   if(a[i]%j==0)
			   {
				    flag=1;
				    break;
			   }
		  }
		  if(flag==0 && a[i]>=2)
		  {
		   	primeCount++;
		  }
	 }
    return primeCount;
}

int average_count(int a[],int N)
{   int sum=0,average=0;
    int *ptr = &a;
    for(int i=0;i<N;i++)
    {
        sum += a[i];
        average = sum/N;
    }
    return average;
}

int main()
{
    int N;
    scanf("%d",&N);
    int ara[N];
    int i,primeNumber,averageCount;

    for(i=0;i<N;i++)
    {
        scanf("%d",ara+i);
    }
    averageCount = average_count(ara,N);
    primeNumber = prime_number(ara,N);
    printf("%d\n",primeNumber);
    printf("%d\n",averageCount);
}


