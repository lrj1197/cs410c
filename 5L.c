#include <stdio.h>
#include <string.h>
/*
Lucas Jameson
CS410C
Sept 19, 2018

Only one set of inputs are sufficient for program completion,
meaning that you do not have to keep looping once
a set of correct inputs have been processed.
Input validation for the coefficient of restitution is needed,
anything outside the range of 0 and 1 should be treated as invalid input
and the user must be prompted for input again.

how many times through loop

h0 + sum(2 * r * h0, num times)

*/

int main(void)
{
    float restitution;
    float final_height;
    int count;
    float initial_height;
    float total_height = initial_height;

    while(1)
    {
        printf("%s\n", "Enter a coefficient of restitution:");
        scanf("\n%f", &restitution);
        printf("%s\n", "Enter an initial height in meters:");
        scanf("\n%f", &initial_height);
        if(restitution > 1.0 || restitution < 0.0)
        {
            return 1;
        }
        else
        {
            while(final_height <= .1)
            {
                final_height += restitution * final_height;
                total_height += 2 * restitution * total_height;
                count++;
            }
            printf("\nTotal height: %f\n", total_height);
            printf("\nNumber of bounces %d\n", count);
            return 0;

        }
    }




    return 0;
}
