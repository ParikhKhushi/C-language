#include<stdio.h>
int main()
{
	int a=1000,b=932,c=7000;
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%i",a);
	    }
	    else
	    {
	    	printf("%i",c);
		}
	
	}
	else if(b>c)
	{
		printf("%i",b);
	}
	else
	{
		printf("%i",c);
	}
	return 0;
}