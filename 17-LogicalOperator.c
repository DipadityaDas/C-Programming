/*********************************************************
 * Author: Dipaditya Das
 *                C Logical Operators
 * An expression containing logical operator returns
 * either 0 or 1 depending upon whether expression results
 * true or false.
 *
 * Logical operators are commonly used in decision
 * making in C programming.
 * 	Operator	 			Meaning				            Example
 * 	 &&			Logical AND.True only if all 	 	If c = 5 and d = 2 then, expression
 *  			operands are true.				 	((c==5) && (d>5)) equals to 0.
 * 	 ||			Logical OR. True only if either 	If c = 5 and d = 2 then, expression
 *              one operand is true                 ((c==5) || (d>5)) equals to 1.
 * 	 !			Logical NOT. True only if the 		If c = 5 then, expression
 *              operand is 0.                       !(c==5) equals to 0.
 *********************************************************/

#include <stdio.h>
int main()
{
	int a = 5, b = 5, c = 10, result;

	result = (a == b) && (c > b);
	printf("(a == b) && (c > b) is %d \n", result);

	result = (a == b) && (c < b);
	printf("(a == b) && (c < b) is %d \n", result);

	result = (a == b) || (c < b);
	printf("(a == b) || (c < b) is %d \n", result);

	result = (a != b) || (c < b);
	printf("(a != b) || (c < b) is %d \n", result);

	result = !(a != b);
	printf("!(a != b) is %d \n", result);

	result = !(a == b);
	printf("!(a == b) is %d \n", result);

	return 0;
}
