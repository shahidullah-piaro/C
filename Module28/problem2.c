#include<stdio.h>
struct phitronStudent
{
    char name[50],email[50],date[20];
    float marks;
};
struct phitronStudent heroes[3];
void display()
{
    for(int i=0; i<3; i++)
    {
        printf("\nInformation for hero %d \n",i+1);
        printf("Name = %s\n",heroes[i].name);
        printf("Email = %s\n",heroes[i].email);
        printf("Date = %s\n",heroes[i].date);
        printf("Marks = %.2f\n",(heroes[i].marks*0.9));
    }
    printf("\n");
}
int main()
{
    for(int i=0; i<3; i++)
    {
        printf("Enter information for hero %d :\n",i+1);
        printf("Enter name : ");
        fflush(stdin);
        gets(heroes[i].name);
        printf("Enter email : ");
        fflush(stdin);
        gets(heroes[i].email);
        printf("Enter date : ");
        fflush(stdin);
        gets(heroes[i].date);
        printf("Enter marks : ");
        scanf("%f",&heroes[i].marks);
    }
    printf("\n");
    display();
    return 0;
}

