#include<stdio.h>
int main()
{
	int n;
	printf("Enter any int num:\n");
	scanf("%i",&n);
	if(n==0)
	{
		printf("Zero..!");
		
	}
	else if(n%2==0)
	{
		printf("EVEN num...!");


	}
	else
	{
		printf("ODD num...!");
	}
	return 0;
}