#include<stdio.h>

int add_three_nums(int a, int b, int c)
{
    #define nullptr ((void*)0)
	return a+b+c;
}


int main(void)
{
    int findNumberOne = add_three_nums(NULL, 2 ,3);
    printf("%d", findNumberOne);
}
