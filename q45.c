#include <stdio.h>

int main(void)
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Reverse Order: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
