#include<stdio.h>
#include<cs50.h>
int main()
{
    int numbers[5] = {10, 20, 30, 28, 29 };
    for(int i=0; i<5; i++)
    {
        printf("numbers[%i]= %i\n", i, numbers[i]);
    }
}
