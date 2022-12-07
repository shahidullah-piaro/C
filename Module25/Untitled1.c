#include<stdio.h>

int take_radius()
{
    int r;
    printf("Please Enter the radius of a circle: ");
    scanf("%d",&r);
    return r;
}

calculate_area(int radius)
{
    float ans = 3.14159*(radius*radius);
    printf("Area of the circle is %f\n",ans);
}

int main()
{
    int r;
    r = take_radius();
    calculate_area(r);
    return 0;
}
