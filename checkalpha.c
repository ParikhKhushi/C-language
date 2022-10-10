#include<stdio.h>
int main()
{
	char ch;
	
	printf("Any value:\n");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' )
	{
		printf("alphabet");
	}
	else
	{
		printf("not an alphabet");
	}
	return 0;
}