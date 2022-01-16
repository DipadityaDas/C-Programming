/******************************************************************
 * Author: Dipaditya Das
 *                         Operators
 * An operator is a symbol that operates on a value or a variable.
 * For example: + is an operator to perform addition.
 *
 * C has a wide range of operators to perform various operations.
 *
 *                   C Arithmetic Operators
 * An arithmetic operator performs mathematical operations such as addition, subtraction,
 * multiplication, division etc on numerical values (constants and variables).
 *
 *
 *                  Operator	Meaning of Operator
 *                         +	addition or unary plus
 *                         -	subtraction or unary minus
 *                         *	multiplication
 *                         /	division
 *                         %	remainder after division (modulo division)
 * 
 *******************************************************************/

#include <stdio.h>
int main()
{
	int a = 9, b = 4, c;

	c = a + b;
	printf("a+b = %d \n", c);
	c = a - b;
	printf("a-b = %d \n", c);
	c = a * b;
	printf("a*b = %d \n", c);
	c = a / b;
	printf("a/b = %d \n", c);
	c = a % b;
	printf("Remainder when a divided by b = %d \n", c);

	return 0;
}