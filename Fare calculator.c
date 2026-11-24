//Emmanuel Murimi
//CT100/G/30744
#include <stdio.h>
float calculateFare(float distance)
{
return distance*50;
}
int main()
{
float distance, fare;

printf("Enter distance coverd in  kilometer\t");
scanf("%f",&distance);
	
	fare = calculateFare(distance);
	printf(" Your Fare is KSH %.2f",fare);
	return 0;
}
