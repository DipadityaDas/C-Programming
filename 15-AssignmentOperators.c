/*********************************************************
 * Author: Dipaditya Das
 *                 C Assignment Operators
 * An assignment operator is used for assigning a value
 * to a variable. The most common assignment operator is =
 * 	Operator	 Example	Same as
 * 	       =	 a = b		a = b
 *        +=	 a += b		a = a+b
 *        -=	 a -= b		a = a-b
 *        *=	 a *= b		a = a*b
 *        /=	 a /= b		a = a/b
 *        %=	 a %= b		a = a%b
 *********************************************************/

#include <stdio.h>
int main()
{
	int a = 5, c;

	c = a; // c is 5
	printf("c = %d\n", c);
	c += a; // c is 10
	printf("c = %d\n", c);
	c -= a; // c is 5
	printf("c = %d\n", c);
	c *= a; // c is 25
	printf("c = %d\n", c);
	c /= a; // c is 5
	printf("c = %d\n", c);
	c %= a; // c = 0
	printf("c = %d\n", c);

	return 0;
}