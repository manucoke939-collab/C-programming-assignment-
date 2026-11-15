//Emmanuel Murimi
//CT100/G/30744
#include <stdio.h>
float bal = 1000;
int ammount= 100;

int main()
{
	while(bal>0)
	{
	printf("\nEnter ammount to whithdraw\t");
	scanf("%d",&ammount);
	bal = bal-ammount;
	printf("Your balance is: %.2f",bal);
	}
	printf("\n Your balance is 0 or - hence transaction ended");
	return 0;
}
