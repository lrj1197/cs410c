/*
Lucas Jameson
CS410C
9/15/18

Purpose:
The purpose of this program is to identify a leap year and whether it
falls under the Gregorian calander or the Julian calander. If it does not fall
into either of the calanders, it is classified as invalid. If the year is outside
the range -9999 to 9999, the program ends
*/
#include <stdio.h>

int main(void)
{
    int year; //defines the year that will be asked for
    printf("Enter a year between -9999 and 9999:\n");
    printf("%s\n", "++++++++++++++++++++++++++++++++++++");
    do
    {
        //printf("%s","Year: ");
        scanf("%d", &year);
        if (year < -9999 || year > 9999)
        {
            return 0;
        }
        else if (year > 5000 || year < -46)
        {
            printf("%-7s%-12d%-12s\n", "Year: " , year, "Not a valid year");
        }
        else
        {
            if (year >= 1753)
            {
                if (!(year % 4 && year % 100 && year % 400))
                {

                    printf("%-7s%-12d%-12s\n", "Year: " , year, "leap year - Gregorian");
                }
                else
                {
                    printf("%-7s%-12d%-12s\n", "Year: " , year, "Not a leap year - Gregorian");
                }
            }
            else
            {
                if (!(year % 4 && year % 100 && year % 400))
                {
                    printf("%-7s%-12d%-12s\n", "Year: " , year, "leap year - Julian");
                }
                else
                {
                    printf("%-7s%-12d%-12s\n", "Year: " , year, "Not a leap year - Julian");
                }
            }
        }
    }while(1); // if year is outside this, break loop

    return 0;
}
