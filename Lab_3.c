/*
Lucas Jameson
CS410C Lab3
Sept 12, 2018

Write a program that accepts 2 sets of x,y coordinates as input and prints which
quadrant they exist in and the distance between the two points in 2D Eulcidian space.

*/
#include <stdio.h>
#include <math.h>

/*-------------------------------------------------------*/

int main(void)
{
	float x1, y1, x2, y2;

	printf("\nEnter (x1, y1): ");
	scanf("\n%f %f", &x1, &y1);
    printf("\n(x1, y1): (%f,%f)", x1, y1);
	printf("\nEnter (x2, y2): ");
	scanf("\n%f %f", &x2, &y2);
    printf("\n(x2, y2): (%f,%f)", x2, y2);
	printf("\n");
	/* Your if statement block for checking (x1,y1) will go here */
    if (x1 > 0.0 && y1 > 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant I\n", x1, y1);
    }
    if (x1 < 0.0 && y1 > 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant II\n", x1, y1);
    }
    if (x1 < 0.0 && y1 < 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant III\n", x1, y1);
    }
    if (x1 > 0.0 && y1 < 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant IV\n", x1, y1);
    }
    if (x1 == 0.0 && y1 != 0.0)
    {
        printf("The point %.2f %.2f lies on the x-axis\n",x1,y1);
    }
    if (y1 == 0.0 && x1 != 0.0)
    {
        printf("The point %.2f %.2f lies on the y-axis\n",x1,y1);
    }
    if (x1 == 0.0 && y1 == 0.0)
    {
        printf("The point %.2f %.2f lies on at the origin\n",x1,y1);
    }

	/* if you are happy that your if statements work for (x1, y1) you
	   can duplicate them  below, this time for (x2, y2) */
    if (x2 > 0.0 && y2 > 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant I\n", x2, y2);
    }
    if (x2 < 0.0 && y2 > 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant II\n", x2, y2);
    }
    if (x2 < 0.0 && y2 < 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant III\n", x2, y2);
    }
    if (x2 > 0.0 && y2 < 0.0)
    {
        printf("The points %.2f %.2f are in Quadrant IV\n", x2, y2);
    }
    if (x2 == 0.0 && y2 != 0.0)
    {
        printf("The point %.2f %.2f lies on the x-axis\n",x2,y2);
    }
    if (y2 == 0.0 && x2 != 0.0)
    {
        printf("The point %.2f %.2f lies on the y-axis\n",x2,y2);
    }
    if (x2 == 0.0 && y2 == 0.0)
    {
        printf("The point %.2f %.2f lies on at the origin\n",x2,y2);
    }

	/* Computing the distance between the two points is done by applying the formuala
	   for distance. Print the computed value for distance. */
       float distance = 0.0;
       float dx = x2 - x1;
       float dy = y2 - y1;
       distance = pow((pow(dx,2) + pow(dy,2)), 0.5);
       printf("The distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",x1,y1,x2,y2,distance);
       printf("All Done. Have a great day!\n" );

	return 0;
} /*main function close*/
