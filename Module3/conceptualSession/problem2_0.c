#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c){
        printf("They are equal\n");
    }else if(a>b && a>c){
        printf("A is greater than B and C\n");
    }else if(b>c && b>a){
        printf("B is greater than A and C\n");
    }else if(c>a && c>b){
        printf("C is greater than A and B\n");
    }else if(a>c && b>c && a==b){
        printf("A and B both are greater\n");
    }else if(a>b && c>b && a==c){
        printf("A and C both are greater\n");
    }else if(b>a && c>a && b==c){
        printf("B and C both are greater\n");
    }
}
