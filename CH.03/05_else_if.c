#include <stdio.h>
int main()
{
    int age = 65;

    if (age >= 60)
    {
        printf("you can drive and you are a seniour sitizen");
    
    }
  
    else if (age >= 40)
    {
        printf("you can drive and you are elder");
    }
    else if(age>=18)
    {
        printf("you can drive");
    }
    else
    {
        printf("you can't drive");
    }
    return 0;
}