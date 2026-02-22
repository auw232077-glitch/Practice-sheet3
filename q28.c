#include<stdio.h>
#include<cs50.h>
int main()
{
    int n = get_int("Enter a number between 1-100: ");

    if(n>0 && n<=100)
    {
        printf("%d is in range 1-100\n", n);
    }
}
