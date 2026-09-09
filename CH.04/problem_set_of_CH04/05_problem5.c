#include <stdio.h>
int main()
{
   long long int sum = 0, i = 1,num;
    /*printf("enter number"); this is for enter input form user
    scanf("%d",&num);*/
    while (i <= 10) 
    {
        sum +=i;
        i++;
    }
    printf("%d", sum);
   /* sum = num*(num+1)/ 2;
    printf("%d", sum); this is the same code add n number of natural numbers but with the help of formula not really add thos number*/  


    return 0;
}
