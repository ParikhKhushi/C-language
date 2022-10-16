#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Enter the number");
	scanf("%i",&n);
	for(i=1;i<=5;i++)
	{
		sum=sum+i;
	}
	printf("summation is %i",sum);
	
	return 0;
}