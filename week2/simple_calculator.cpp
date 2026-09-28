/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 2 - Simple Calculator Using a Switch Statement
 */

#include <iostream>

int main() {
    double number1;
    double number2;
    double result = 0.0;
    char operation;

    // Read the two numbers and the arithmetic operator from the user.
    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    if (!std::cin) {
        std::cout << "Invalid input entered.\n";
        return 1;
    }

    // The switch selects the calculation that matches the entered operator.
    switch (operation) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0) {
                std::cout << "Division by zero is not allowed.\n";
                return 1;
            }
            result = number1 / number2;
            break;
        default:
            std::cout << "Invalid operator entered.\n";
            return 1;
    }

    std::cout << "\nResult: " << number1 << ' ' << operation << ' '
              << number2 << " = " << result << '\n';

    return 0;
}
