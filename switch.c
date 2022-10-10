/*switch : when we have multiple choices and we need output as per choice entered.

syntax:
	switch(variable)
	{
		case 1 : ..code;
		break;
		
		case 2 : ..code;
		break;
		
		case 3 : ..code;
		break;
		
		default:
			     ..code;
			     
	}*/
	
	#include<stdio.h>
	int main()
	{
		int choice;
		
		printf("enter your choice\n");
		scanf("%i",&choice);
		switch(choice)
		{
			case 1 : printf("parth");
			break;
			
			case 2 : printf("vasuli");
			break;
			
			case 3 : printf("alisha");
			break;
			
			case 4 : printf("demi");
			break;
			
			case 5 : printf("sattu");
			break;
			
			case 6 : printf("khushi");
			break;
			
			case 7 : printf("jeet");
			break;
			
			case 8 : printf("akki");
			break;
			
			case 9 : printf("pinky");
			break;
			
			case 10 : printf("harsh");
			break;
			
			case 11 : printf("rocky");
			break;
			
			case 12 : printf("ronak");
			break;
			
			case 13 : printf("satyam");
			break;
			
			case 14 : printf("manan");
			break;
			
			case 15 : printf("krisha");
			break;
			
			default:
				printf("Invalid choice..!");
			
		}
				return 0;
	}