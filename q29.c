#include<stdio.h>
#include<cs50.h>
int main()
{
    int a = get_int("Enter a number: ");
    int b = get_int("Enter another number: ");
    if(a>b)
    {
        printf("%d is greater t5han %d", a, b);
    }
    else if(a<b)
    {
        printf("%d is less than %d\n", a, b);
    }
    else
    {
        printf("Both are equal\n");
    }

}
