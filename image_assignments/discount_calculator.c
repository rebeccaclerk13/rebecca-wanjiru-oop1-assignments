/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Image Question 1 - Discount Calculator Using a Function
 */

#include <stdio.h>

double calculateDiscount(double purchaseAmount) {
    // Select the discount percentage based on the purchase amount.
    if (purchaseAmount < 5000) {
        return 0.05 * purchaseAmount;
    } else if (purchaseAmount <= 9999) {
        return 0.10 * purchaseAmount;
    }

    return 0.15 * purchaseAmount;
}

int main(void) {
    double purchaseAmount;

    // Read the purchase amount before calling the discount function.
    printf("Enter purchase amount (KSh): ");
    if (scanf("%lf", &purchaseAmount) != 1 || purchaseAmount < 0) {
        printf("Invalid purchase amount entered.\n");
        return 1;
    }

    // Store the value returned by calculateDiscount().
    const double discountAmount = calculateDiscount(purchaseAmount);
    const double finalAmount = purchaseAmount - discountAmount;

    // Display the original amount, discount, and final amount payable.
    printf("\n========== DISCOUNT RECEIPT ==========\n");
    printf("Purchase amount: KSh %.2f\n", purchaseAmount);
    printf("Discount amount: KSh %.2f\n", discountAmount);
    printf("Final payable:   KSh %.2f\n", finalAmount);
    printf("======================================\n");

    return 0;
}
