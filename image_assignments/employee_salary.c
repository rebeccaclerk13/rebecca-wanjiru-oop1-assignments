/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Image Question 3 - Employee Salary Using a Function
 */

#include <stdio.h>

double calculateTax(double grossSalary) {
    // Select the tax percentage based on the employee's gross salary.
    if (grossSalary < 30000) {
        return 0.05 * grossSalary;
    } else if (grossSalary <= 59999) {
        return 0.10 * grossSalary;
    }

    return 0.15 * grossSalary;
}

int main(void) {
    double grossSalary;

    // Read the gross salary before calling the tax function.
    printf("Enter gross salary (KSh): ");
    if (scanf("%lf", &grossSalary) != 1 || grossSalary < 0) {
        printf("Invalid gross salary entered.\n");
        return 1;
    }

    const double taxAmount = calculateTax(grossSalary);
    const double netSalary = grossSalary - taxAmount;

    // Display the gross salary, tax, and final net salary.
    printf("\n========== EMPLOYEE SALARY ==========\n");
    printf("Gross salary: KSh %.2f\n", grossSalary);
    printf("Tax amount:   KSh %.2f\n", taxAmount);
    printf("Net salary:   KSh %.2f\n", netSalary);
    printf("=====================================\n");

    return 0;
}
