#include <stdio.h>
/*company insures drivers in the following case :
1.if drivered is married 
2.if drivered is unmarried male and above 30 years old 
3. i the diver is unmarried female and above 25 year of age  .
 write a program check if the divere is eligible for insurance or not */
int main() {
    char maritalStatus;
    char gender;
    int age;

    // Get input from the user
    printf("Enter marital status (M for married, U for unmarried): ");
    scanf(" %c", &maritalStatus);  // Space before %c to consume any leftover whitespace

    printf("Enter gender (M for male, F for female): ");
    scanf(" %c", &gender);  // Space before %c to consume any leftover whitespace

    printf("Enter age: ");
    scanf("%d", &age);

    // Check eligibility based on the conditions
    if (maritalStatus == 'M') {
        printf("Driver is eligible for insurance.\n");
    } else if (maritalStatus == 'U'||'u' && gender == 'M'||'m' && age > 30) {
        printf("Driver is eligible for insurance.\n");
    } else if (maritalStatus == 'U'||'u' && gender == 'F'||'f' && age > 25) {
        printf("Driver is eligible for insurance.\n");
    } else {
        printf("Driver is not eligible for insurance.\n");
    }

    return 0;
}

