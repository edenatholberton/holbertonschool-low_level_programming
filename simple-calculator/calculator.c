#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /**
  * This is the skeleton of the simple calculator.
  *
  * Requirements:
  * - print a welcome line [x] 
  * - display a menu	   [x]
  * - quit with option 0   [x]
  */

int main(void)
{
	int n = 1; 

	printf("Welcome to Eden's Simple Calculator! \n");
	printf("\nType a number to select your category:\n");

	printf(" 1) Add + \n");
	printf(" 2) Subtract - \n");
	printf(" 3) Multiply *\n");
	printf(" 4) Divide /\n");
	printf("\n 0) QUIT \n");


	/** MENU CHOICE */
	

	/* Exits program (key) */
	while (n != 0)
	{
		printf("Choice: ");
		scanf("%d", &n);
		
		if (n == 0)
		{
			printf("Bye! \n");
			return 0;
		}

		/* Proceed to Addition tab */
		else if (n == 1)
		{
	
		}

		/* Proceed to Subtract tab */		
		else if (n == 2)
		{

		}

		/* Proceed to Multiplication tab */
		else if (n == 3)
		{

		}

		/*  Proceed to Division tab */		
		else if (n == 4)
		{

		}

		/* If user inputs anything else. Loop recalls to the top */
		else 
		{
			printf("Invalid Choice \n");
		}
	}	
	return 0;
}
