#include <stdio.h>

int main(void)
{
	int n = 1; 
	double A;
	double B;

	printf("Welcome to Eden's Simple Calculator!\n");

	/** MENU CHOICE */
	while (n != 0)
	{
		printf("\n 1) Add + \n");
		printf(" 2) Subtract - \n");
		printf(" 3) Multiply *\n");
		printf(" 4) Divide /\n");
		printf("\n 0) QUIT \n");
	
		printf("\nType a number to select your category:\n");
		printf("Choice: ");
		scanf("%d", &n);
			
		/* Exits program (key) */
		if (n == 0)
		{
			printf("Bye! \n\n");
			return 0;
		}

		/* Proceed to Addition tab */
		else if (n == 1)
		{
			printf("A: ");
			scanf("%lf", &A);
		
			printf("B: ");
			scanf("%lf", &B);

			printf("\nResult: %g\n", A + B);
		}

		/* Proceed to Subtraction tab */		
		else if (n == 2)
		{
			printf("A: ");
			scanf("%lf", &A);

			printf("B: ");
			scanf("%lf", &B);
			
			printf("\nResult: %g\n", A - B);
		}
		
		/* Proceed to Multiplication tab */
		else if (n == 3)
		{
			printf("A: ");
			scanf("%lf", &A);

			printf("B: ");
			scanf("%lf", &B);

			printf("\nResult: %g\n", A * B);
		}

		/*  Proceed to Division tab */		
		else if (n == 4)
		{
			printf("A: ");
			scanf("%lf", &A);

			printf("B: ");
			scanf("%lf", &B);
			
			if (B == 0)
			{
				printf("Error: division by zero\n");
			}
			else
			printf("\nResult: %g\n", A / B);
		}

		/* If user inputs anything else. Loop recalls to the top */
		else 
		{
			printf("Invalid Choice\n\n");
			printf("______________\n");
		}
	}	
	return 0;
}
