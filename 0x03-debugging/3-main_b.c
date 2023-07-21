#include <stdio.h>
#include "main.h"
/**
 * main - takes a date and print how many days are left
 * leap years account 
 * Return:0
 */

int main(void)
{
	int day;
	int month;
	int year;

	day = 4;
	month = 01;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
