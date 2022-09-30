#include<stdio.h>
int main()
{
	int atmpin;//
	
	printf("Enter your atm pin");
	scanf("%i", &atmpin);
	
	if(atmpin==2210)
	{
		printf("welcome user....!");
	}
	else
	{
		printf("Invalid oin....!");
	}
return 0;
}