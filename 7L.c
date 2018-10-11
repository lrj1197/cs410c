/*=======================================================*/
/*=======================================================*/
#include <stdio.h>
#include <math.h>

#define ARR_SIZE 100

int read_array(int arr[ARR_SIZE]);
double calc_mean(int arr[ARR_SIZE], int size);
double calc_stddev(int arr[ARR_SIZE], int size);
void print_array(int arr[ARR_SIZE], int size);

/*=======================================================*/
int main(void)
{
    int numbers[ARR_SIZE] = {0};
    int size = 0;
    double mean = 0;
    double stddev = 0;

    /* Read data into the array */
    read_array()
	/* Print the contents of the array (input data) */

    /* Calculate the statistics */

    /* Print the results */
    printf("Total numbers read: %d\n", size);
    printf("   Arithmetic mean: %f\n", mean);
    printf("Standard Deviation: %f\n", stddev);

    return 0;
}

/*=======================================================*/
/* Scan a list of integers from user input until either
 * end-of-file is reached, or ARR_SIZE items have been read
 * Input: a -- array of ints to be filled with user input
 * Output: How many ints were put into the array
 * Side-effects: Scans for input, modifies array
 *=======================================================*/
int read_array(int a[ARR_SIZE])
{
    int num_read = 0;
    for(int i = 0; i)
    scanf("%d\n",&);


    return num_read;
}

/*=======================================================*/
/* Returns the arithmetic mean of the first "size"
 * integers in array.
 * Input: a -- array of ints to be averaged
 *        size -- how many elements are in the array
 * Output: The arithmetic mean
 * Side-effects: NONE
 *=======================================================*/
double calc_mean(int a[ARR_SIZE], int size)
{
	double mean = 0;
    for(int i = 0; i <= size; i++)
    {
        mean += i;
    }
    mean = mean/size;

    return mean;
}

/*=======================================================*/
/* Returns the standard deviation of the first "size"
 * integers in array.
 * Input: arr -- array of ints to be included
 *        size -- how many elements are in the array
 * Output: The standard deviation
 * Side-effects: NONE
 *=======================================================*/
double calc_stddev(int arr[ARR_SIZE], int size)
{
	double stddev = 0;
    double d;
    double mean = 0;
    for(int i = 0; i <= size; i++)
    {
        mean += i;
    }
    mean = mean/size;

    for(int i = 0; i <= size; i++)
    {
        d += pow((arr[i] - mean),2);
    }
    sttdev = sqrt(d/size);
    return stddev;
}

/*=======================================================*/
/* Prints the contents of the array on a single line
 * Input: array -- array of ints to be printed
 *        size -- how many elements are in the array
 * Output: NONE
 * Side-effects: prints to the screen
 *=======================================================*/
void print_array(int array[ARR_SIZE], int size)
{
    for(int i = 0; i <= size; i++)
    {
        printf("%d %lf\n", i, array[i]);
    }

}
