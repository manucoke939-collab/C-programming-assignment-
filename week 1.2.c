//Emmanuel Murimi 
//CT100/G/30744/26
#include <stdio.h>
int main(){
float height = 4.5;
int bank_bal = 4000;
char phone_no[11] = "757655197";
printf("Enter your height \t");
scanf("%f",&height);
printf("Enter your bank blance \t");
scanf("%i",&bank_bal);
printf("Enter your height");
scanf("%s",&phone_no);
printf("Your height is %.1f\n",height);
printf("And your bank balance is %i\n",bank_bal);
printf("Your phone number is %s\n",phone_no);
}