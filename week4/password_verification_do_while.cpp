/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 4 - Password Verification System Using a Do-While Loop
 */

#include <iostream>
#include <string>

int main() {
    // These predefined credentials represent the account's stored login data.
    const std::string correctUsername = "admin";
    const std::string correctPassword = "pass123";

    std::string enteredUsername;
    std::string enteredPassword;
    bool accessGranted = false;

    // A do-while loop guarantees at least one login attempt.
    do {
        std::cout << "Enter username: ";
        std::cin >> enteredUsername;

        std::cout << "Enter password: ";
        std::cin >> enteredPassword;

        if (enteredUsername == correctUsername &&
            enteredPassword == correctPassword) {
            std::cout << "Access Granted\n";
            accessGranted = true;
        } else {
            std::cout << "Incorrect credentials, try again\n";
        }
    } while (!accessGranted);

    return 0;
}
