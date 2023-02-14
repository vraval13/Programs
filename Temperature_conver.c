#include <stdio.h>

int main()
{
    int fahrenheit;
    float celsuis;

    printf("Enter the temperature in fahrenheit:");
    scanf("%d", &fahrenheit);

    celsuis = (5 / 9) * (fahrenheit - 32);

    printf("Temperature in Celsuis is %d", celsuis);

    return 0;
}