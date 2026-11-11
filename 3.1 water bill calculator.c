//Emmanuel Murimi
//CT100/G/30744/26
#include <stdio.h>
int main()
{
	int units = 0;
    float bill =0.0f;
    
	printf("Enter Number of units: ");
	scanf("%d",&units);
	
if(units<=30)
{
bill=units*20;
}
else if(units >30<=60)
{
	bill=units*25;
}
else
{
	bill=units*30;
}

printf("Total water bill: %.2f KSH",bill);

return 0;
}