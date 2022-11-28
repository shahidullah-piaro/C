#include<stdio.h>
void take_input_in_array(int num_arr[],int size)
{
    for(int i = 0;i<size;i++)
        scanf("%d",&num_arr[i]);
}

void print_array(int arr[],int size)
{
    for(int i = 0;i<size;i++)
        printf("%d ", arr[i]*2);
}

int main(void)
{
    int size;
    scanf("%d",&size);

    int num[size];

    take_input_in_array(num,size);
    print_array(num,size);
}
