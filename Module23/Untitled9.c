#include<stdio.h>
#include<limits.h>
void input_array(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
}

int get_max(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}

void solve()
{
    int size;
    scanf("%d",&size);
    int num[size];
    input_array(num, size);
    int max = get_max(num, size);
    printf("Max number: %d\n",max);
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}
