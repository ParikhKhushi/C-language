#include<stdio.h>
int main()
{
	int row,col;
	
	
	for(col=4;col>=1;col--) 
	{
		for(row=1;row<=col;row++) 
		{
			printf(" *");
		}			
					
		printf("  \n");
	}
	
	
	return 0;
}