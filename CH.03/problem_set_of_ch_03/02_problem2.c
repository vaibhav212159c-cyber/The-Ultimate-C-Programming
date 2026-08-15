#include <stdio.h>

int main()
{
    int mark1, mark2, mark3;
    printf("enter mark 1\n");
    scanf("%d", &mark1);
    printf("enter mark 2\n");
    scanf("%d", &mark2);
    printf("enter mark 3\n");
    scanf("%d", &mark3);
    printf("your marks is %d, %d, %d \n", mark1, mark2, mark3);

    if (mark1 < 33 || mark2 < 33 || mark3 < 33)
        printf("you are fail because of less mark in indivisiul subject");
    else if ((mark1 + mark2 + mark3) / 3 < 40)
        printf("you are fail because of low percentage");
    else
    {

        printf("you  are pass");
    }

    return 0;
}