#include <stdio.h>

int main()
{
    int choice;
 printf("Choose an option:\n");
printf("1. Area of Rectangle\n");
printf("2. Area of Circle\n");
printf("3. Area of Triangle\n");
printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        float l, b, a_r;
        printf("enter the length of rectangle :");
        scanf("%f", &l);
        printf("enter the breadth of rectangle :");
        scanf("%f", &b);

        a_r = l * b;
        printf("the area of rectangle of length %f and breadth %f is %f ", l, b, a_r);
        break;

    case 2:

        float r, a_c;
        printf("what is the radius of circle:");
        scanf("%f", &r);
        a_c = 3.14 * r * r;
        printf("the area of circle whose r is %f is %f", r, a_c);
        break;

    case 3:

        float b_t, h, a_t;
        printf("what is the base of triangle:");
        scanf("%f", &b_t);
        printf("what is the height of triangle:");
        scanf("%f", &h);

        a_t = ( b_t * h)/2;

        printf("the area of triangle whose base is %f and height is %f is %f ", b_t, h, a_t);
        break;
default:
    printf("Invalid choice!");
    break;

    }

    return 0;
}