/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 6 - Student Fee Management System
 */

#include <iomanip>
#include <iostream>
#include <string>

class Student {
private:
    std::string studentName;
    std::string admissionNumber;
    double feeBalance;

public:
    void inputStudent();
    void makePayment();
    void displayStatus() const;
};

void Student::inputStudent() {
    // Store the student's identity and initial fee balance in the object.
    std::cout << "Enter student name: ";
    std::getline(std::cin >> std::ws, studentName);

    std::cout << "Enter admission number: ";
    std::getline(std::cin, admissionNumber);

    std::cout << "Enter fee balance (KSh): ";
    std::cin >> feeBalance;

    if (feeBalance < 0) {
        std::cout << "Fee balance cannot be negative.\n";
        feeBalance = 0;
    }
}

void Student::makePayment() {
    double payment;

    std::cout << "Enter payment amount (KSh): ";
    std::cin >> payment;

    // Reject invalid or excessive payments before changing the private balance.
    if (payment <= 0) {
        std::cout << "Payment must be greater than zero.\n";
    } else if (payment > feeBalance) {
        std::cout << "Payment cannot be greater than the fee balance.\n";
    } else {
        feeBalance -= payment;
        std::cout << "Payment processed successfully.\n";
    }
}

void Student::displayStatus() const {
    // Expose the current status through a public display function.
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n========== STUDENT FEE STATUS ==========\n";
    std::cout << "Student name:      " << studentName << '\n';
    std::cout << "Admission number:  " << admissionNumber << '\n';
    std::cout << "Remaining balance: KSh " << feeBalance << '\n';
    std::cout << "=========================================\n";
}

int main() {
    Student student;

    // Create one Student object and demonstrate the required operations.
    student.inputStudent();

    if (!std::cin) {
        return 1;
    }

    student.makePayment();
    student.displayStatus();
    return 0;
}
