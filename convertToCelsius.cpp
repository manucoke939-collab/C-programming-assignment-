//Emmanuel Murimi
//CT100/G/30744/26

#include<stdio.h>

float convertToCelsius(float Fahrenheit)
{
return Fahrenheit-32;	
}

int main()
{
float m= 0.55556;
float Fahrenheit,Celsius;

	printf("Enter  temperature in Fahrenheit:  ");
	scanf("%f",&Fahrenheit);
	Celsius= convertToCelsius (Fahrenheit) * m;
	
	printf("celsius = %.2f",Celsius);
	
	return 0;
}
