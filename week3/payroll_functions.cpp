/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 3 - Payroll System Using Functions
 */

#include <iomanip>
#include <iostream>
#include <string>

// The assignment does not specify an overtime rate, so it is kept as a visible
// constant that can easily be changed when the lecturer provides the rate.
const double OVERTIME_RATE_PER_HOUR = 500.0;

struct EmployeeDetails {
    std::string name;
    double basicSalary;
    double overtimeHours;
};

void getEmployeeDetails(EmployeeDetails& employee) {
    // Collect the employee information from the user.
    std::cout << "Enter employee name: ";
    std::getline(std::cin >> std::ws, employee.name);

    std::cout << "Enter basic salary (KSh): ";
    std::cin >> employee.basicSalary;

    std::cout << "Enter overtime hours: ";
    std::cin >> employee.overtimeHours;
}

double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    // Overtime pay is calculated from hours worked and the hourly rate.
    return overtimeHours * ratePerHour;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    // Net salary is the basic salary plus the calculated overtime pay.
    return basicSalary + overtimePay;
}

void displayPayslip(const EmployeeDetails& employee, double overtimePay,
                    double netSalary) {
    // Display the complete payslip after all calculations are complete.
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n================ EMPLOYEE PAYSLIP ================\n";
    std::cout << "Employee name:          " << employee.name << '\n';
    std::cout << "Basic salary:           KSh " << employee.basicSalary << '\n';
    std::cout << "Overtime hours:         " << employee.overtimeHours << '\n';
    std::cout << "Overtime pay:           KSh " << overtimePay << '\n';
    std::cout << "Net salary:             KSh " << netSalary << '\n';
    std::cout << "===================================================\n";
}

int main() {
    EmployeeDetails employee{};

    getEmployeeDetails(employee);

    if (!std::cin || employee.basicSalary < 0 || employee.overtimeHours < 0) {
        std::cout << "Invalid salary or overtime hours entered.\n";
        return 1;
    }

    const double overtimePay =
        calculateOvertimePay(employee.overtimeHours, OVERTIME_RATE_PER_HOUR);
    const double netSalary = calculateNetSalary(employee.basicSalary, overtimePay);

    displayPayslip(employee, overtimePay, netSalary);
    return 0;
}
