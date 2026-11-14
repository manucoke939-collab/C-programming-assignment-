#include <stdio.h>
int main()
{
	int choice;
	printf("Select Data Bundle: \n");
	printf("1. 100 MB @50 KES \n");
	printf("2. 500 MB @100 KES \n");
	printf("1. 1 GB @ 350 KES \n");
	printf("4. 2 GB @ 600 KES \n");
printf("Enter your choice (1-4):");
scanf("%d",&choice);

switch (choice) {
	case 1:
	printf("You selected 100MB. Cost = 50KES \n");
	break;
case 2:
printf("You selected 500MB. Cost = 100KES \n");
break;
case 3:
printf("You selected 1GB. Cost = 350KES \n");
break;
case 4:
printf("You selected 2GB.Cost =600KES \n");
break;
default:
	printf("Invalid choice\n");
}
return 0;
}