/*
Lucas Jameson
CS410C Lab1
Sept 5, 2018

Write a program that accepts 2 numbers as input and computes and prints the result of the following computations:
1) Sum of the two numbers
2) Second number subtracted from the first
3) Product of the two numbers
4) First number divided by the second
5) Sum of the two numbers subtracted from the product of the two
6) Finally, if a and b are the two numbers compute:
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  double a, b = 0.0; //initialize a,b
  printf("Enter two values or q to kill the program:\n");
  scanf("\n %lf %lf", &a, &b); //get a,b
  float s_1 = a + b; // soln to prob 1
  float s_2 = b - a; // soln to prob 2
  float s_3 = b * a; // soln to prob 3
  float s_4 = a / b; // soln to prob 4
  float s_5 = (a + b) - (a * b); // soln to prob 5
  float s_6 = pow(a,3) + 3 * pow(a,2) * b + 3 * pow(b,2) * a + pow(b,3); // soln to prob 6
  // float s_6 = a * a * a + 3 * a * a * b + 3 * a * b * b + b * b * b;  alternative method
  //Print results
  printf("the solution to 1) is: %lf \n", s_1);
  printf("the solution to 2) is: %lf \n", s_2);
  printf("the solution to 3) is: %lf \n", s_3);
  printf("the solution to 4) is: %lf \n", s_4);
  printf("the solution to 5) is: %lf \n", s_5);
  printf("the solution to 6) is: %lf \n", s_6);
  printf("All Done, Goodbye\n");
  return 0;
}
