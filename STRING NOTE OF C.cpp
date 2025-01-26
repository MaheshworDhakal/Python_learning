
Sure! Here's a concise note on Strings in C:

//Strings in C
In C, strings are arrays of characters that are terminated by a special character called the null character ('\0').
 They are not a distinct data type in C, but are instead implemented as arrays of characters.

// Declaring Strings:
Strings are declared as arrays of characters:

char str[100];  // Declares a string that can hold up to 99 characters + 1 for null terminator

//Initializing Strings:
You can initialize a string using double quotes:


char str[] = "Hello, World!"; // Automatically adds the null terminator
Alternatively, you can initialize with specific characters:


char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // Explicitly adding the null terminator
//String Length:
The length of a string is the number of characters before the null character \0.
 To calculate the length of a string, use the built-in function strlen():

#include <string.h>
int length = strlen(str);  // Returns the length excluding the null terminator
4. String Input and Output:
To read strings from the user:


char str[100];
scanf("%s", str);  // Reads a single word (stops at whitespace)
For reading a full line (including spaces), use fgets():


fgets(str, sizeof(str), stdin);  // Reads a line with spaces
To print a string:


printf("%s\n", str);
//String Operations:
C provides several functions in <string.h> to work with strings:

//strcpy() - Copies one string to another:

strcpy(destination, source);

//strcat() - Concatenates (joins) two strings:

strcat(destination, source);

//strcmp() - Compares two strings:

int result = strcmp(str1, str2);  // Returns 0 if equal, positive/negative if different
//strchr() - Finds the first occurrence of a character in a string:

//String Length:
The length of a string is the number of characters before the null character \0.
 To calculate the length of a string, use the built-in function strlen():

char *ptr = strchr(str, 'e');  // Returns a pointer to the first occurrence of 'e'

// String Example Program:
Here's an example of how you might use strings in C:


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';  // Remove the newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0';  // Remove the newline character

    if (strcmp(str1, str2) == 0) {
        printf("Both strings are identical.\n");
    } else {
        printf("Strings are different.\n");
    }
    
    return 0;
}
//Important Points:
Strings in C are arrays of characters.
They are terminated by a null character '\0'.
You must ensure the null terminator is added to properly terminate a string.
fgets() should be used for input to avoid buffer overflow or incomplete strings.
Be cautious of buffer sizes when working with strings.
