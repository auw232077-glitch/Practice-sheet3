#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int maximum = max(num1, num2);
    printf("Maximum = %d\n", maximum);

    return 0;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
