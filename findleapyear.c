#include<stdio.h>
int main()
{
	int year;
	printf("Enter year:\n");
	scanf("%i",&year);
	if(year%4==0 && year%100!=0)
	{
		printf("leap year...!");
	}
	else
	{
		printf("Not 2...!");
	}
	return 0;
}