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

	int n = 0; 

	printf("Welcome to Eden's Simple Calculator! \n");
	printf("\nType a number to select your category:\n");

	printf(" 1) Add + \n");
	printf(" 2) Subtract - \n");
	printf(" 3) Multiply *\n");
	printf(" 4) Divide /\n");
	printf("\n 0) QUIT \n");

	printf("Choice: ");
	scanf("%d", &n);

	if (n == 0)
	{
		printf("Bye! \n");
	}

	return 0;
}
