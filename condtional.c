/*Program to Grade(A,B,C,D,F) the Students by taking their marks as an input (0 - 100)*/
#include<stdio.h>
int main()
{
	int m;
	printf("Enter the student marks:"); /*taking input from user*/
	scanf("%d", &m); /*assigning input value in variable 'm' */
	if(m>=85 && m<=100) /*&& = only if both of the cases in the 'if' condition is true the true statement is executed*/
	{
		printf("Grade A");
	}
	else if(m>=70 && m<=84)
	{
		printf("Grade B");		
	}
	else if(m>=55 && m<=69)
	{
		printf("Grade C");
	}
	else if(m>=40 && m<=54)
	{
		printf("Grade D");
	}
	else 
	{
		printf("Grade F"); /*if any of the above statements are not executed then this statement is executed*/
	}
	return 0;
}

Output:
Enter the student marks:75
Grade B
