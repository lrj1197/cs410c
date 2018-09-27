/*==============================================================================
NAME: Lucas Jameson
ASSIGNMENT: 0P
PURPOSE: The purpose of this program is to compute the circumference
of an ellipse of major axis a and minor axis b by using several methods
of approximation. The several methods are listed below:
 Ramanujan’s formula, first approxmiation:
 Ramanujan’s formula, second approximation:
 Muir’s formula:
 Hudson’s formula:
 Holder mean:
 David Cantrell’s formula:
From each of these approximations provided, the results will be tabulated
for easy veiwing.
================================================================================*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.141526535897932384626433 // value pulled from wikipedia...


int main(void)
{
    /*define useful variables*/
    double a,b = 0.0;
    double first_approx = 0.0;
    double second_approx = 0.0;
    double h = 0.0;
    double muir = 0.0;
    double hudson = 0.0;
    double holder = 0.0;
    double cantrel = 0.0;
    double s = 1.5;
    double s1 = log(2)/log(PI/2);
    double s2 = 0.825056;
    char line[55] = "+----------------------------------------------------+";

    /*=== Initial prompt ===*/

    printf("\nFinding the circumference of an elipse\n");
    printf("==========================================\n\n");


    /*User inputs two real numbers*/
    printf("Please input two real numbers for the Major Axis and the Minor Axis.\n");
    scanf("\n %lf%lf", &a, &b);

    /*====Compute the circumference via the different methods====*/
    first_approx = PI * (3 * (a + b) - sqrt((3*a + b) * (a + 3 * b)));

    h = pow((a - b),2) / pow((a + b),2);
    second_approx = PI * (a + b) * (1 + 3 * h / (10 + pow((4 - 3 * h),0.5)));

    muir = 2 * PI * pow((pow(a,s) / 2 + pow(b,s) / 2 ), 1/s);

    hudson = (PI/4) * (a + b) * (3 * (1 + h/4) + 1/(1 - h/4));

    holder = 4*pow((pow(a,s1) + pow(b,s1)),1/s1);

    cantrel = 4 * (a + b) - 2 * (4 - PI) * a * b/pow((pow(a,s2)/2 + pow(b,s2)/2),1/s2);

    /*====Format the results into a table====*/
    printf("Elipse Circumference for Major axis: %.2lf , Minor axis: %.2lf: \n", a, b );
    printf("%s\n", line);
    printf("| The Ramanujan’s first approximation  | %lf \n", first_approx);
    printf("%s\n", line);
    printf("| The Ramanujan’s second approximation | %lf \n", second_approx);
    printf("%s\n", line);
    printf("|               The Muir approximation | %lf \n", muir);
    printf("%s\n", line);
    printf("|             The Hudson approximation | %lf \n", hudson);
    printf("%s\n", line);
    printf("|             The Holder approximation | %lf \n", holder);
    printf("%s\n", line);
    printf("|            The Cantrel approximation | %lf \n", cantrel);
    printf("%s\n\n", line);
    printf("All Done, Goodbye, Have a Great Day!\n");

    return 0;
}
