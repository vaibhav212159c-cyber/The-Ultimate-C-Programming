#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of i is %d\n", i); // 5
    i = i + 5; // we can also use i =+5;
    printf("the value of i is %d\n", i); // 10
    i++;
    printf("the value of i is %d\n", i); // 11
    ++i;
    printf("the value of i is %d\n", i); // 12
    // now both are i++ or the ++i are doing the same work just increate a number in the i
    // if we use them in the print function directly we will see the diffrence

    printf("the value of i is %d\n", i++); // 12 (now i value is 12 so the ++i first print that value then increment so first print 12 than make it 13)
    printf("the value of i is %d\n", ++i); // 14 (now i will become 13 so ++i function first increment then print so that it increment first 13 to 14 then print 14)
    // i++fist print then increment
    // ++i  first increment then print
    i +=5; // we can write i = i + 5 like i +=5 . both are the same things
    printf("the value of i is %d\n", i); // 19

    

    return 0;
}