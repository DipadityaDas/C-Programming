#include <stdio.h>

int main() {
    int a,b,c;
    scanf("Enter the values of a and b\n%d%d", &a, &b);
    c = a + b;
    printf("The sum of %d and %d = %d", a,b,c);
    return 0;
}