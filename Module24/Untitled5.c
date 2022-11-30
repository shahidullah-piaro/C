#include<stdio.h>

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

void main()
{
  int number, number2, number3;
  long fact,fact2,fact3,ratio1,ratio2;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Enter two number: ");
  scanf("%d %d",&number2,&number3);

  fact = factorial(number);
  fact2 = factorial(number2);
  fact3 = factorial(number3);
  if(fact2>fact3)
  {
    ratio1 = fact2/fact3;
    ratio2 = fact3/fact3;

  }else if(fact2<fact3)
  {
    ratio1 = fact3/fact2;
    ratio2 = fact2/fact2;
  }else if(fact2==fact3)
  {
    ratio1 = fact2/fact2;
    ratio2 = fact2/fact2;
  }
  printf("Factorial of %d is %ld\n", number, fact);
  if(fact2>fact3)
    printf("Factorial ratio of %d and %d is %ld : %ld\n",number2,number3,ratio1,ratio2);
  else if(fact2<fact3)
    printf("Factorial ratio of %d and %d is %ld : %ld\n",number2,number3,ratio2,ratio1);
  else if(fact2==fact3)
    printf("Factorial ratio of %d and %d is %ld : %ld\n",number2,number3,ratio1,ratio2);
  return 0;
}
