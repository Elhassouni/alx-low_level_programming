#include <stdio.h>  // Including the standard input-output header file for functions like printf.
#include <stdlib.h> // Including the standard library header for functions like atoi.
 
/**
 * Adds positive numbers passed as command line arguments.
 *
 * @param argc: The number of command line arguments.
 * @param argv: An array of strings representing the command line arguments.
 * @return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char* argv[]) {
    int sum = 0;  // Variable to store the sum of the numbers.
 
    // Checking if no number is passed to the program.
    if (argc == 1) {
        printf("0\n");
        return 0;
    }
 
    // Iterating through the command line arguments.
    for (int i = 1; i < argc; i++) {
        // Checking if the argument contains symbols that are not digits.
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                printf("Error\n");
                return 1;
            }
        }
 
        // Converting the argument to an integer and adding it to the sum.
        sum += atoi(argv[i]);
    }
 
    // Printing the result.
    printf("%d\n", sum);
 
    return 0;
}
