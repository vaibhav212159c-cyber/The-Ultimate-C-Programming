#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i <= 15; i++)
    {
        if (i == 5)
        {
            // break; // exit the code now
            continue; // skip this iteration (skip 5)
        }

        printf("the i is %d\n", i);
    }

    return 0;
}