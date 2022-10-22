//write a C program to take two integers as input and show who is bigger. If they are equal print as it is. see the sample input and output for more clarification.
//5 10 -> B is Bigger
//10 2 -> A is Bigger
//4 4 -> They are equal
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    if(a==b){
        printf("Both are equal\n");
    }else if(a>b){
        printf("A is greater than B\n");
    }else{
        printf("B is greater than A\n");
    }
}
