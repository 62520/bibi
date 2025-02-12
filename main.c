#include <stdio.h>
#include <math.h>

int main()
{
	int year, rateInt;
	double amt, principal = 1000000.0, rate = 0.36;

	for (rateInt = 5; rateInt <= 30; rateInt++)
	{
		rate = (float)rateInt / 10;
		printf("%5s%24s\n", "Year", "Amt on deposit");
		printf("\n Interest at %d percent \n", rateInt);
		for (year = 1; year <= 30; year++)
		{
			amt =  pow(1.0 + rate, year)*principal;
			printf("%2d%25f\n", year, amt);
		}
	}

	return 0;
}