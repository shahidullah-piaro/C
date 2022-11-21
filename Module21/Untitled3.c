#include<stdio.h>
#include<math.h>
float f(int x,int y);
int absolate(int x);

int main()
{
    int x,y;
    x = 12;
    y = 7;
    float ans;
    ans = f(x,y);
    printf("%f",ans);
    return 0;
}

float f(int x,int y)
{
    int temps = absolate(x-3) + (y+4)*(y+4);
    return sqrt(temps);
}
int absolate(int x)
{
    if(x>=0)
    {
        return x;
    }else
    {
        return (-1)*x;
    }
}
