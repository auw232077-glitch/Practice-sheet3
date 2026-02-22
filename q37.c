#include<stdio.h>
#include<cs50.h>


int main()
{

    int n = get_int("How many elements do you want to enter: ");
    int array[n];
    for (int i=0; i<n; i++)
    {
         array[i]= get_int("Enter the array values: ");
    }
    for(int i=0; i<n; i++)
    {
    printf("array[%i] = %i\n", i, array[i]);
    }

}
