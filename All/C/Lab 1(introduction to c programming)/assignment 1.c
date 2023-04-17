#include <stdio.h>
int main()
{
    int volume;
    float length, width, height;
    printf("Enter length of a box: ");
    scanf("%f", &length);
    printf("Enter width of a box: ");
    scanf("%f", &width);
    printf("Enter height of a box: ");
    scanf("%f", &height);
    volume=height*length*width;
    printf("volume is: %d", volume);
    return 0;
}
