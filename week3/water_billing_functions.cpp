/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 3 - Water Billing System Using Functions
 */

#include <iomanip>
#include <iostream>
#include <string>

// The assignment does not specify a water rate, so this rate is documented
// here and can be changed without changing the calculation functions.
const double WATER_RATE_PER_UNIT = 50.0;

struct CustomerDetails {
    std::string name;
    double unitsConsumed;
};

void getCustomerDetails(CustomerDetails& customer) {
    // Read the customer's name and the number of units consumed.
    std::cout << "Enter customer name: ";
    std::getline(std::cin >> std::ws, customer.name);

    std::cout << "Enter units consumed: ";
    std::cin >> customer.unitsConsumed;
}

double calculateBill(double unitsConsumed, double ratePerUnit) {
    // The bill before discount is units consumed multiplied by the unit rate.
    return unitsConsumed * ratePerUnit;
}

double applyDiscount(double billBeforeDiscount, double unitsConsumed) {
    // Customers using more than 100 units receive a 10 percent discount.
    if (unitsConsumed > 100) {
        return billBeforeDiscount * 0.10;
    }

    return 0.0;
}

void displayBill(const CustomerDetails& customer, double billBeforeDiscount,
                 double discount, double finalAmount) {
    // Display the bill values so the discount can be checked clearly.
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n================ WATER BILL =================\n";
    std::cout << "Customer name:          " << customer.name << '\n';
    std::cout << "Units consumed:         " << customer.unitsConsumed << '\n';
    std::cout << "Bill before discount:   KSh " << billBeforeDiscount << '\n';
    std::cout << "Discount:               KSh " << discount << '\n';
    std::cout << "Final amount payable:   KSh " << finalAmount << '\n';
    std::cout << "=============================================\n";
}

int main() {
    CustomerDetails customer{};
    getCustomerDetails(customer);

    if (!std::cin || customer.unitsConsumed < 0) {
        std::cout << "Invalid number of units entered.\n";
        return 1;
    }

    const double billBeforeDiscount =
        calculateBill(customer.unitsConsumed, WATER_RATE_PER_UNIT);
    const double discount =
        applyDiscount(billBeforeDiscount, customer.unitsConsumed);
    const double finalAmount = billBeforeDiscount - discount;

    displayBill(customer, billBeforeDiscount, discount, finalAmount);
    return 0;
}
