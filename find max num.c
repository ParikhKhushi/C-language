#include<stdio.h>
int main()
{
	int a=1612,b=1314,c=998,max;
	//max = (a>b) ? (a>c) ? a : (b>c) ? b:c;
	max = (a>b && a>c) ? a : (b>c)? b:c;
	printf("%i", max);
		return 0;
}