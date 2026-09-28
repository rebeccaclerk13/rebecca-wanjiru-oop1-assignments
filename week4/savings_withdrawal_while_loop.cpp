/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 4 - Savings Withdrawal System Using a While Loop
 */

#include <iomanip>
#include <iostream>

int main() {
    double balance;

    std::cout << "Enter account balance (KSh): ";
    std::cin >> balance;

    if (!std::cin || balance < 0) {
        std::cout << "Invalid account balance entered.\n";
        return 1;
    }

    // Continue asking for withdrawals while there is money in the account.
    while (balance > 0) {
        double withdrawalAmount;

        std::cout << "Enter withdrawal amount (KSh): ";
        std::cin >> withdrawalAmount;

        if (!std::cin || withdrawalAmount <= 0) {
            std::cout << "Enter a withdrawal amount greater than zero.\n";
            return 1;
        }

        // A withdrawal greater than the balance ends the process.
        if (withdrawalAmount > balance) {
            std::cout << "Withdrawal amount is greater than the balance.\n";
            break;
        }

        balance -= withdrawalAmount;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Withdrawal successful.\n";
        std::cout << "Remaining balance: KSh " << balance << '\n';

        // The while condition stops the loop automatically when balance is 0.
        if (balance == 0) {
            std::cout << "The account balance is now zero.\n";
        }
    }

    std::cout << "Withdrawal process ended.\n";
    return 0;
}
