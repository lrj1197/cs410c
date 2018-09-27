/*
Lucas Jameson
CS410C
9/21/18

PURPOSE:
*/
#include <stdio.h>
#include <math.h>

int main (void)
{
	double restitution = 0.0;
    double height = 0.0;
    double tot_dist = 0.0;
    int bounce = 0;

	printf("Enter a coefficient of restitution: ");
	scanf("%lf", &restitution);
	if(restitution < 0.0 || restitution >= 1.0)
	{
		printf("\nInvalid input for the coefficient of resitution, try again!\n");
		return main();
	}
	printf("\nEnter an initial height in meters: ");
	scanf("%lf", &height);
	tot_dist = height;
	if(restitution >= 0.0 && restitution < 1.0)
	{
		while(height > 0.1)
		{
		height = height * restitution;
		tot_dist = tot_dist + (height * 2.0);
		bounce++;
		}
	}

    printf ("\nNumber of bounces: %d \n", bounce);
    printf ("Total distance travelled in meters: %6.2lf \n", tot_dist);
    return 0;
}
