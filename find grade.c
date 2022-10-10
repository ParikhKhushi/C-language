	#include<stdio.h>
int main()
{
	
	int Stats,Acc,Ba;
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
	
	printf("Stats=%i\nAcc=%i\nBa=%i\n",Stats,Acc,Ba);
	
	total_marks = Stats+Acc+Ba; //222
	
	printf("\n\nTotal marks=%.f",total_marks);
	percentage=total_marks/3;
	printf("\n\npercentage=%.10f",percentage);	
	
	if(percentage>=90)
	{
		printf("\nGrade A...!");	
	}
else if(percentage>=80)
{
	printf("\nGrade B...!");
}
else if(percentage>=70)
{
	printf("\nGrade C...!");
}
else
{
	printf("\nGrade D...!");
	
}
	return 0;
}