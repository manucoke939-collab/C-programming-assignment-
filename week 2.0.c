//Emmanuel murimi
//CT100/G/30744/26
#include <stdio.h>

int main(){
double pi= 3.142;
float R=4.5;
float H=6.5;
printf("Enter Radius R\t");
scanf("%f",&R);
printf("Enter Height H\t");
scanf("%f",&H);
double volume =pi * R * R * H;
printf("volume =%.3f",volume);
return 0;
}