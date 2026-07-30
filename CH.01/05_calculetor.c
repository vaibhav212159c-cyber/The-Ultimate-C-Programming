#include <stdio.h>
int main()
{
    float a, b, c;
    printf("enter first number:");
    scanf("%f" ,&a);
    printf("enter the second number :");
    scanf("%f", &b);
    c = a + b;
    printf("\nthe sum of %.2f and %.2f is %.2f ", a, b, c);
    c = a - b;
    printf("\nthe diffrence btw %.2f and %.2f is %.2f", a, b, c);
    c = a * b;
    printf("\nthe multiplication of %.2f and %.2f is %.2f ", a, b, c);
    c = a / b;
    printf("\nthe divisible of %.2f and %.2f is %.2f ", a, b, c);

    return 0;
}
