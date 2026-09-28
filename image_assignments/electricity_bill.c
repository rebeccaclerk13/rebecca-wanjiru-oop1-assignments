/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Image Question 2 - Electricity Bill Using a Function
 */

#include <stdio.h>

double calculateBill(double unitsConsumed) {
    // Apply the electricity rates progressively across the unit bands.
    if (unitsConsumed <= 100) {
        return unitsConsumed * 10;
    } else if (unitsConsumed <= 200) {
        return (100 * 10) + ((unitsConsumed - 100) * 15);
    }

    return (100 * 10) + (100 * 15) + ((unitsConsumed - 200) * 20);
}

int main(void) {
    double unitsConsumed;

    // Read the number of units before calculating the bill.
    printf("Enter number of units consumed: ");
    if (scanf("%lf", &unitsConsumed) != 1 || unitsConsumed < 0) {
        printf("Invalid number of units entered.\n");
        return 1;
    }

    const double billAmount = calculateBill(unitsConsumed);

    // Display both the input units and the calculated bill.
    printf("\n========== ELECTRICITY BILL ==========\n");
    printf("Units consumed: %.2f\n", unitsConsumed);
    printf("Total bill:     KSh %.2f\n", billAmount);
    printf("======================================\n");

    return 0;
}
