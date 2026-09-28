/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 4 - Employee Bonus System Using a For Loop
 */

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    const int NUMBER_OF_EMPLOYEES = 5;

    std::cout << "Enter details for " << NUMBER_OF_EMPLOYEES
              << " employees.\n";

    // The for loop repeats the input and report process exactly five times.
    for (int employeeNumber = 1; employeeNumber <= NUMBER_OF_EMPLOYEES;
         ++employeeNumber) {
        std::string employeeName;
        double basicSalary;

        std::cout << "\nEmployee " << employeeNumber << " name: ";
        std::getline(std::cin >> std::ws, employeeName);

        std::cout << "Employee " << employeeNumber
                  << " basic salary (KSh): ";
        std::cin >> basicSalary;

        if (!std::cin || basicSalary < 0) {
            std::cout << "Invalid basic salary entered.\n";
            return 1;
        }

        // The bonus is five percent of the employee's basic salary.
        const double bonus = 0.05 * basicSalary;
        const double totalSalary = basicSalary + bonus;

        // Display the calculated report before moving to the next employee.
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n---------- EMPLOYEE BONUS REPORT ----------\n";
        std::cout << "Name:          " << employeeName << '\n';
        std::cout << "Basic salary:  KSh " << basicSalary << '\n';
        std::cout << "Bonus:         KSh " << bonus << '\n';
        std::cout << "Total salary:  KSh " << totalSalary << '\n';
        std::cout << "-------------------------------------------\n";
    }

    return 0;
}
