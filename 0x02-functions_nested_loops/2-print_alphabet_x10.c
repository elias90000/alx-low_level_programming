void print_alphabet_x10(void);
{
char alpa='a';
a=0;
while(a<=10)
{
	char alpa='a';
	for(;alpa<='z';++alpa)
	{
		printf("%c",alpa);
	}
	printf("\n");
}
}

#include "main.h"

/**
 *  * main - check the code.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    print_alphabet_x10();
	        return (0);
}
