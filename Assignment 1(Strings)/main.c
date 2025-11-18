#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character added by fgets()
    name[strcspn(name, "\n")] = '\0';

    // Print the string back to the user
    printf("You entered: %s\n", name);

    // Calculate length
    length = strlen(name);
    printf("Length of the string is: %d\n", length);

    return 0;
}
