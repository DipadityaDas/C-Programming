#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter the values: ");

    // We don't have to provide any & symbol before any string type variable.
    scanf("%s%d", str, &i);

    // \n is a New-Line Character.
    // It prints a new-line in the screen
    printf("\nYou have entered: %s %d", str, i);
    return 0;
}