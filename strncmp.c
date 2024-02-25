#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "Hello!";
    int n = 4; // Number of characters to compare

    // Compare the first n characters of str1 and str2
    int result = strncmp(str1, str2, n);

    if (result == 0) {
        printf("The first %d characters of str1 and str2 are the same.\n", n);
    } else if (result < 0) {
        printf("The first %d characters of str1 are lexicographically less than str2.\n", n);
    } else {
        printf("The first %d characters of str1 are lexicographically greater than str2.\n", n);
    }

    return 0;
}
