#include<stdio.h>
#include<cs50.h>
int main()
{
    int n= get_int("Enter n: ");
    if (n>0)
    {
        if(n%2==0)
        {
            printf("%d is even\n", n);
        }
        else
        {
             printf("%d is odd\n", n);
        }
    }


    else if(n<0)
    {
            if(n%2==0)
            {
                printf("%d is even|n", n);
            }
            else
            {
                printf("%d is odd\n", n);
            }
    }

    else if(n==0)
    {
        printf("%d is neither positive nor negative , but it is even\n", n);
    }
}
