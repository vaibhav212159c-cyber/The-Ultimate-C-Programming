#include <stdio.h>

int main ()
{
    int length,breadth,area ;
    printf ("enter length of rectangle:- ");
    scanf("%d",&length);
    printf("enter breadth of rectangle :-");
    scanf("%d",&breadth);
    area= length*breadth;

    printf("the area of rectangle of length %d, and breadth %d, is = %d\n" ,
        length,breadth,area);
    return 0;
}