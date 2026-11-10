//EMMANUEL MURIMI
//CT100/G/30744/26
#include <stdio.h>
char name[25] = "Emmanuel_Murimi";
int marks = 57;
float attendance = 7;
int main()
{
	printf("Enter Name ''in exy_nhhd format''\n");
	scanf("%s",name);
	printf("Enter scored Marks\n");
	scanf("%d",&marks);
	printf("Enter Number of class attended \n");
	scanf("%f",&attendance);
if(marks >=40 && attendance >=7.5)
{
	
printf("Eligible");
}
else
{
printf("not eligible");	
}
	return 0;
} 