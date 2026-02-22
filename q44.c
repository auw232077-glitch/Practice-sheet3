#include <stdio.h>

int main(void)
{
    int numbers[5];      
    int positive_count = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > 0)
        {
            positive_count++;
        }
    }
    printf("Positive Numbers Count = %d\n", positive_count);

    return 0;
}
