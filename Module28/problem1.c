#include<stdio.h>
struct person
{
    int age;
    float salary;
};
void display(struct person p)
{
    printf("Age = %d \n",p.age);
    printf("Salary = %.2f \n",p.salary);
}
int main()
{
    struct person p1,p2;
    p1.age=30;
    p1.salary=28000;
    display(p1);
    printf("\n");
    p2.age=35;
    p2.salary=50000;
    display(p2);
    return 0;
}

