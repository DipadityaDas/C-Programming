#include <stdio.h>
int main() {
	int a, b, c;
	printf("Enter any two numbers:\n");
	scanf("%d%d", &a, &b);
	c = a - b;
	printf("Subtraction of %d and %d = %d", a, b, c);
	return 0;
}