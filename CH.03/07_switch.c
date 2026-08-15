#include <stdio.h>

int main()
{
    int choice;

    printf("Enter 1 for area of rectangle\n");
    printf("Enter 2 for area of circle\n");
    printf("Enter 3 for area of triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        float length, breadth, area;

        printf("Enter length of rectangle: ");
        scanf("%f", &length);

        printf("Enter breadth of rectangle: ");
        scanf("%f", &breadth);

        area = length * breadth;

        printf("Area of rectangle = %.2f\n ", area);

        break;
    }

    case 2:
    {
        float radius, area;

        printf("Enter radius of circle: ");
        scanf("%f", &radius);

        area = 3.14 * radius * radius;

        printf("Area of circle = %.2f\n", area);
        break;
    }

    case 3:
    {
        float base, height, area;

        printf("Enter base of triangle: ");
        scanf("%f", &base);

        printf("Enter height of triangle: ");
        scanf("%f", &height);

        area = (base * height) / 2;

        printf("Area of triangle = %.2f", area);
        break;
    }

    default:
        printf("invalid choice");
    }

    return 0;
}