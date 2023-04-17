#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("temperature in celsius: %.2f", celsius);

    return 0;
}
