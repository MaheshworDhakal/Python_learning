#include <stdio.h>

int main() {
    int units;
    float totalAmount;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Initialize the total amount with the meter charge
    totalAmount = 50;  // Meter charge is Rs 50

    // Calculate the cost based on the units consumed
    if (units <= 100) {
        totalAmount += units * 8;  // Rs 8 per unit for the first 100 units
    } else if (units <= 300) {
        totalAmount += 100 * 8 + (units - 100) * 12;  // Rs 8 for first 100, Rs 12 for next 200
    } else {
        totalAmount += 100 * 8 + 200 * 12 + (units - 300) * 15;  // Rs 8 for first 100, Rs 12 for next 200, Rs 15 for beyond 300
    }

    // Display the total amount
    printf("Total amount to be paid: Rs %.2f\n", totalAmount);

    return 0;
}

