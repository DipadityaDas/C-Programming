#include <stdio.h>

int main() {
	float a = 0.0f;
	double b = 0.0;

	printf("Enter Value of a and b:\n");
	scanf("%f %lf", &a, &b);
	printf("a = %f\nb = %lf", a, b);
	return 0;
}