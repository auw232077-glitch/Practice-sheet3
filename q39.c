#include<stdio.h>
#include<cs50.h>
int main()
{
    int nums[5]= {1, 2, 3, 4,5};
    int sum =0;
    float avg;
    for (int i=0; i<5; i++)
    {
        sum = sum+nums[i];
        avg = sum/5.0;
    }
    printf("Average  = %.2f\n", avg);
}
