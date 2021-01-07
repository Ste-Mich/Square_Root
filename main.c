#include <stdio.h>
#include <stdbool.h>

int gcd(int x, int y)
{
    int temp;

    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main()
{
    int input1 = 1;
    int input2 = 1;

    printf("Type in your two values to find greatest common divisor: \n");
    scanf("%i", &input1);
    printf("Next number:\n");
    scanf("%i", &input2);

    printf("The greatest common divisor is: %i", gcd(input1, input2));
    return 0;
}