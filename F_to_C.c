#include<stdio.h>
int main()
{
    float f, c;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);

    c = (f-32)*5;
    c = c/9;

    printf("Celsius: %f", c);
    
    return 0;
}