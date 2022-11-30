#include<stdio.h>
int grade_count(int marks)
{
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=40 && marks<60)
    {
        printf("Grade C");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade B");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade B");
    }
    else if(marks>=80 && marks<=100)
    {
        printf("Grade A");
    }
}
void main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    grade_count(marks);
    return 0;
}
