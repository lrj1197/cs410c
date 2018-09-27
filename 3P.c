/*
a) [5 points]If the number is less than 1 or greater than 1000 you must display a message indicating
that the input is invalid and continue to prompt the user
b) [5 points]If the number entered is 1000, you should stop the program.
c) In all other cases do the following:
 [25 points] Generate the numbers in the Fibonacci series from the beginning until the
term in the series is not greater than the number entered. Print each term in the series
separated by a tab. Print only 10 numbers on one line. Also print the total number of
terms in the sequence. (You MUST use a while loop to generate this sequence).
 [30 points] For all numbers in the range 1 to the number entered, calculate all the prime
numbers and display each prime number separated by a tab. Print only 10 numbers on
one line. Also print the total number of numbers in the sequence. (You MUST use a
while loop to generate this sequence).
A prime number is a number greater than 1 and has no divisors other than 1 and the
number itself
 [25 points] For the Collatz Conjecture, consider this rule for transforming a positive
integer n:
If n is even, divide it by 2
If not, multiply it by 3 and add 1
xn = xn-1 + xn-2
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int input = 0;
    int start = 0;
    int second = 1;
    int next;
    int c;
    printf("%s\n", "Enter the number of terms:");
    scanf("%d", &input);
    if (input < 1 || input > 1000)
    {
        printf("%s\n", "Invalid");
        return main();
    }
    else if (input == 1000)
    {
        return 0;
    }
    else
    {
        //Primes
//////////////////////////////////////////////
        int i =0;
        int j = 0;
        while(i < num)
        {
            if(i%2 != 0)
            {
                while(i < sqrt(j))
                {
                    if (i%j != 0)
                    {
                        printf("%d  ", i)
                        j = j + 1;
                    }
                }
            }
            i = i + 1;
        }
        printf("The total number of primes are %d \n", i);
//////////////////////////////////////////////
        // Fibonacci

        int fib = 0;
        int count_fib = 0;
        while(fib<=input)
        {
            if (fib < 1)
            {
                next = fib;
                count_fib++;
            }
            else
            {
                fib = first + second;
                printf("%d\n", fib);
                first = second;
                second = fib;
                count_fib++;
            }
        }
        printf("%d\n", count_fib);
//////////////////////////////////////////////
//Collatz  con
// do with while loop
        int countc = 0;
        int even;
        int odd;
        while(even > 1 && odd > 1)
        {
            if(coun_c % 2 == 0)
            {
                even = count_c / 2;
                printf("%d  ", even);
                count_c = count_c + 1;
            }
            else
            {
                odd = count_c * 3 + 1;
                printf("%d  ", odd);
                count_c = count_c + 1;
            }
        }
        printf("%d\n",count_c);
    }



    return 0;
}
