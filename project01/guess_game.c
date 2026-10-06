#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
    int random_number , guessed_num, number_of_guess =0 ;
    srand(time(0));
    random_number= rand() %100 +1 ;
    do {
        printf("enter your number:");
        scanf("%d",&guessed_num);
        if(guessed_num>random_number){
            printf("lowwer plese!\n");
        }
        else if (guessed_num < random_number){
            printf("upper plese !\n");
        }
    number_of_guess ++;
    } while (guessed_num != random_number);
    printf("you find number in %d gusses",number_of_guess);
    

    
    return 0;
}    