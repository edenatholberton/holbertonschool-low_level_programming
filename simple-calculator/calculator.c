#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /**
  * This is the skeleton of the simple calculator.
  *
  * Requirements:
  * - print a welcome line [ ] 
  * - display a menu	   [ ]
  * - quit with option 0   [ ]
  */

int main(void)
{

	int n = 0; 

	printf("Welcome to Eden's Simple Calculator! \n");
	printf("\nType a number to select your category:\n");

	printf(" 1) Add \n");
	printf(" 2) Substract \n");
	printf(" 3) Multiple \n");
	printf(" 4) Divide \n");
	printf("\n 0) Quit \n");

	scanf("%d", &n);

	return 0;
}
