#include<stdio.h>
struct Student
{
    int roll;
    char name[50];
    double marks;
};

void printStudent(int n,struct Student s)
{
    printf("Information of Student %d\n",n+1);
    printf("Roll -> %d\n",s.roll);
    printf("Name -> %s\n",s.name);
    printf("Marks -> %lf\n",s.marks);
}

int main()
{
    struct Student cls[2];
    int i;
    for(i=0; i<2; i++)
    {
        scanf("%d",&cls[i].roll);
        scanf("%s",&cls[i].name);
        scanf("%lf",&cls[i].marks);
    }
    double summ=0;
    for(i=0; i<2; i++)
    {
        if(cls[i].roll % 2 == 0)
        {
            printStudent(i,cls[i]);
            summ += cls[i].marks;
        }
    }
    printf("%lf",summ);
    return 0;
}
