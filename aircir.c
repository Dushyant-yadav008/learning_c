// Q4: Write a program to calculate the area and circumference of a circle given its radius. 

#include <stdio.h>

int main()
{
    int r;
    float a, c;
    printf("Enter the radius:\n");
    scanf("%d", &r);
    a = 3.14 * r * r;       
    c = 2 * 3.14 * r;       
    printf("Area of circle: %f\n", a);
    printf("Circumference of circle: %f\n", c);

    return 0;
}
