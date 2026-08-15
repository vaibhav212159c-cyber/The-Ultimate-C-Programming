#include <stdio.h>

int main()
{
    int pec;
    printf("enter your percentage:\n");
    scanf("%d", &pec);
    

    if(pec>=101)
    {
        printf("invalid percentage");
    }
    else if (pec>=90)
    {
        printf("you got a ");
    }
    else if (pec >= 80)
    {
        printf("you got b ");
    }
    else if (pec >= 70)
    {
        printf("you got c ");
    }
    else if (pec >= 60)
    {
        printf("you got c ");
    }
    else if (pec >= 31)
    {
        printf("you got d ");
    }
    else if (pec <= 30)
    {
        printf("you are fail ");
    } 

    return 0;
}