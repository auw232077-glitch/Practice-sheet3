#include<stdio.h>
#include<cs50.h>
int main()
{
    int a = get_int("Enter anumber: ");
    int b = get_int("Enter second number: ");
    int c = get_int("Eter third number: ");
    if(a>b && a>c)
    {
        printf("%d is greater than %d and %d\n", a, b, c);
    }
}
