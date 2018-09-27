/*===================================================================
NAME: Lucas Jameson
ASSIGNMENT: 0P
PURPOSE:
The purpose of this program is to execute the following:
1. Swap the values of two variables named boxA and boxB.
2. Calculate the sum of four variables called a, b, c, and d, and
store the result in a
variable called total.
3. Calculate the average of the same four variables and
store the result in avg.
4. Calculate the square of b and store the result in square.
5. Calculate the cube of b and store the result in cube.
6. Calculate the value of b raised to the fourth power and
store the result in quad..
7. Calculate the result of the expression below and
store the answer in a variable called
result:
a2 + b3 + c4 + d5
and divide the result by the sum of a, b, d
=====================================================================*/
#include <stdio.h>
#include <math.h>


int main(void)
{
    /*=== Variable declarations go here ===*/
    /*(You can declare any additional variables below this line)*/

    /* values to be swapped */
    int boxA = 0;
    int boxB = 0;
    int swap = 0;
    double a, b, c, d; /* values to be summed and averaged */

    /* values to be calculated */
    double total = 0.0;
    double avg = 0.0;
    double square = 0.0;
    double cube = 0.0;
    double quad = 0.0;
    double result = 0.0;

    /*=== Initial prompt ===*/
    printf("\n");
    printf ("         Program 0 Tasks\n");
    printf ("         ===============\n\n");

    /*=== Gather data from the user ===*/
    printf ("Please enter the amount in boxA (kg).\n");
    scanf ("\n%d", &boxA);

    printf ("Please enter the amount in boxB (kg).\n");
    scanf ("\n%d", &boxB);

    /*=== Seek more input from the user to be filled into variables a, b, c and d ===*/
    printf ("Please enter a real number for a,b,c,d:\n");
    scanf ("\n%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("------------------------------------------------------\n\n");

    /*=== Perform the calculation tasks ===*/
    printf("Swap the values in boxA and boxB\n");
    printf("=================================\n\n");
    swap = boxA;
    boxA = boxB;
    boxB = swap;
    printf("boxA = %d kgs \nboxB = %d kgs \n", boxA, boxB);
    printf("------------------------------------------------------\n\n");

    printf("Compute some Mathematical expressions for the floating point numbers\n");
    printf("====================================================================\n\n");
    total = a + b + c + d;
    printf("The total is: %.2lf \n", total);

    avg = total / 4.0;
    printf("The average is: %.2lf \n", avg);

    square = b * b;
    printf("The square of b is: %.2lf \n", square);

    cube = square * b;
    printf("The cube of b is: %.2lf \n", cube);

    quad = pow(b,4);
    printf("b raised to the fourth power is: %.2lf \n", quad);

    result = (pow(a,2) + pow(b,3) + pow(c,4) + pow(d,5)) / (a + b + d);
    printf("The result is: %.2lf \n", result);
    printf("------------------------------------------------------\n");
    printf("All Done, Goodbye, Have a Great Day!\n");




    return 0;
}
