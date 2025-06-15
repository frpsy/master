#include "mylib.h"
#include <stdio.h>
/// @file main.c
/// @brief Main program file demonstrating the usage of functions from the mylib library.
/// @brief Main program file that demonstrates the use of mylib functions.

/// @brief Prints a greeting message with the given name.
/// @param name The name to include in the greeting.
int greet_with_name(const char *name) {
    if (name == NULL) {
        printf("Hello, Guest!\n");
    } else {
        printf("Hello, %s!\n", name);
    }

    say_hello();
    say_goodbye();
    return 0;
}

/// @brief Calls the greet_with_name function with a specific name and a NULL value.
/// @return Returns 0 on success.
int call_everything(void) {
    greet_with_name("Alice");
    greet_with_name(NULL);
    return 0;
}

/// @brief Main function that calls the call_everything function.
/// @return Returns 0 on success.
int main(void) {
    call_everything();
    return 0;
}