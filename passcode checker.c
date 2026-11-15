#include <stdio.h>


int main()
{
	int password;

do
{	printf("Enter password\t");
	scanf("%d",&password);
	if(password != 1234)
	{
	printf("Incorrect password. please try again.\n");
	}
}
while(password != 1234);
{
	printf("Access Granted\n");
}
	return 0;
}