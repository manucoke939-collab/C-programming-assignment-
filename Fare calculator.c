//Emmanuel Murimi
//CT100/G/30744
#include <stdio.h>

int fare;
float distance;

int main()
{
	printf("Enter distance coverd in  kilometer\t");
	scanf("%f",&distance);
	
	fare = distance * 50;
	printf(" Your Fare is KSH %d",fare);
	return 0;
}
