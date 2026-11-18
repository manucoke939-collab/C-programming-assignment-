//Emmanuel Murimi
//CT100/G/30744/26

#include <stdio.h>

float calculateElectricBill(int units)
{
	float bill;
	if (units <= 100)
	{
		bill = units*10;
	}
	else if (units <= 200)
	{
		bill=(100*10)+(units-100)*15;
	}
	else
	{
		bill=(100*10)+(100*15)+(units-200)*20;
	}
	return bill;
}
int main()
{
	int units;
	float totalBill;
	printf("Enter units consumed\t");
	scanf("%d", &units);
	if (units<0)
	{
		printf("invalid units enterd.\n");
	}
	else
	{
		totalBill = calculateElectricBill(units);
		printf("Total Electricity Bill=KSh. %.2f\n",totalBill);
	}
	return 0;
}