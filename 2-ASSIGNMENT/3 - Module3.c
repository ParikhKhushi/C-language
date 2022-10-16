	#include<stdio.h>
int main()
{
	
	int Stats,Acc,Ba,English;
	float percentage,total_marks;
	
	printf("Student name:Khushi Parikh\n");
	printf("Class:B\n");
	printf("Roll no.:07\n");
	
	printf("Enter marks of Stats:");
	scanf("%i",&Stats);
	
	printf("Enter marks of Acc:");
	scanf("%i",&Acc);
	
	printf("Enter marks of Ba:");
	scanf("%i",&Ba);
	
	printf("Enter marks of English:");
	scanf("%i",&English);

	printf("Stats=%i\nAcc=%i\nBa=%i\nenglish=%i",Stats,Acc,Ba,English);
	
	total_marks = Stats+Acc+Ba+English; 
	
	printf("\n\nTotal marks=%.f",total_marks);
	percentage=total_marks/3;
	printf("\n\npercentage=%.2f",percentage);	
	
	if(percentage>75)
	{
		printf("\nDistinction...!");	
	}
    else if(percentage>60 && percentage<=75)
    {
	    printf("\nfirst class...!");
    }
    else if(percentage>50 && percentage<=60)
    {
	    printf("\nSecond class...!");
    }
    else if(percentage>35 && percentage<=50)
    {
	printf("\nPass class...!");
	}
	else
	{
		printf("\nFail...!");
	}
	return 0;
}