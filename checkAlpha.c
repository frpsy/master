#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // Read input from user

    printf("Alphabets in the input string: ");
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) { // Check if character is an alphabet
            printf("%c", input[i]); // Print alphabetic character
        }
    }
    printf("\n");

    return 0;
}
