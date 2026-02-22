#include<stdio.h>
#include<cs50.h>
int main()
{
    int array[5]= {1, 20, 37, 40, 59};
    int largest =array[0];
    for(int i=1; i<=4; i++)
    {
        if(array[i]> largest)
        {
            largest = array[i];
        }


    }
    printf("%d\n ", largest);
}
