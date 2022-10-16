#include<stdio.h>
int main()
{
	int row,col;
	
	
	for(row=1;row<=4;row++) // 4<=3
	{
		for(col=1;col<=row;col++) //4<=3
		{
			printf("*");// * 
		}				//  * * 
						//  * * *
		printf("\n\n");
	}
	
	
	return 0;
}
