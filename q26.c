#include<stdio.h>
#include<cs50.h>
int main()
{
    int n = get_int("Enter n: ");
    if(n==0)
    {
        printf(" %d is zero\n", n);
    }
    else if(n<0)
    {
        printf("%d is negative\n", n);
    }
    else if(n>0)
    {
        printf("%d is positive\n", n);
    }
}
