#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("enter the first number ");
    scanf("%d", &a);

    printf("enter the second number ");
    scanf("%d", &b);
    int c = a + b;

    printf("the sum of %d and %d is %d \n", a, b, c);

    // modulus operator is use to find the remainder
    printf("the remender of %d and %d is %d ", a, b, a % b);
    return 0;
}