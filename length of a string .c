#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to hold the string
    int length = 0; // Initialize length counter

    printf("Enter a string: ");
    scanf("%s", str); // Read the input string

    // Loop through each character until the null terminator
    while (str[length] != '\0') {
        length++; // Increment length for each character
    }

    printf("Length of the string: %d\n", length); // Print the length
    return 0;
}
