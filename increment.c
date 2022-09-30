#include<stdio.h>
int main()
{
	int a=10;
	 
	 printf("%i\n", a);//10
	 printf("%i\n",a++);//10
	 printf("%i\n",a);//11
	 printf("%i\n",++a);//12
	 printf("%i\n",a++);//12
	 printf("%i\n",a++);//13
	 printf("%i\n",++a);
	 printf("%i\n",a++);
	 
	return 0;
}