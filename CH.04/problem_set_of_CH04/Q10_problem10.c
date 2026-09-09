#include <stdio.h>

int main()
{
    int num, prime = 0, i;
    printf("enter number :");
    scanf("%d", &num);
    if(num==0||num==1){
        printf("%d is not the prime number",num);
    }
    else
    {
        for (i = 2; i < num; i++)
        {
         if (num % i == 0)
            {
                prime = 1;
            }
        }
        if (prime)
        {
            printf("%d is not the prime number ", num);
        }
        else
        {
            printf("%d is the prime number", num);
        }
    }   
    return 0;
}