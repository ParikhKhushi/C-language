#include<stdio.h>
int main()
{
	int n,count=0,i;
	printf("Enter any number");
	scanf("%i",&n);
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		count++;
		}
	}
	if(count==2)
	{
		printf("Prime number");
	}
	else 
	{
		printf("Not prime number");
	}
    
	
	return 0;
}