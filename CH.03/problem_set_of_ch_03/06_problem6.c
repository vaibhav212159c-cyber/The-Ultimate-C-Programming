#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter first numbers ");
    scanf("%d", &a);
    printf("enter second numbers ");
    scanf("%d", &b);
    printf("enter third numbers ");
    scanf("%d", &c);
    printf("enter fourth numbers ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest of all is %d", c);
    }
    else if (d > a && d > c && d > b)
    {
        printf("The greatest of all is %d", d);
    }
    return 0;
}