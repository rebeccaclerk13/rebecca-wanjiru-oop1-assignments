/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 5 - Hotel Management System Using Arrays
 */

#include <iomanip>
#include <iostream>

const int DAYS_IN_WEEK = 7;
const int FLOORS_PER_BRANCH = 5;
const int ROOMS_PER_FLOOR = 10;
const int NUMBER_OF_BRANCHES = 3;

bool inputWeeklyRevenue(double revenue[DAYS_IN_WEEK]) {
    // Store one revenue value for each of the seven days.
    for (int day = 0; day < DAYS_IN_WEEK; ++day) {
        std::cout << "Enter revenue for day " << day + 1 << " (KSh): ";
        std::cin >> revenue[day];

        if (!std::cin || revenue[day] < 0) {
            std::cout << "Invalid revenue entered.\n";
            return false;
        }
    }

    return true;
}

double calculateWeeklyRevenue(const double revenue[DAYS_IN_WEEK]) {
    double totalRevenue = 0.0;

    // Add every daily value to produce the weekly total.
    for (int day = 0; day < DAYS_IN_WEEK; ++day) {
        totalRevenue += revenue[day];
    }

    return totalRevenue;
}

void simulateOneBranchOccupancy(
    int occupancy[FLOORS_PER_BRANCH][ROOMS_PER_FLOOR]) {
    // Use a repeatable 0/1 pattern so the result can be reproduced exactly.
    for (int floor = 0; floor < FLOORS_PER_BRANCH; ++floor) {
        for (int room = 0; room < ROOMS_PER_FLOOR; ++room) {
            occupancy[floor][room] = (floor + room) % 2;
        }
    }
}

void displayFloorOccupancy(
    const int occupancy[FLOORS_PER_BRANCH][ROOMS_PER_FLOOR]) {
    std::cout << "\n========== ONE-BRANCH ROOM OCCUPANCY ==========\n";

    // Count occupied and vacant rooms separately for every floor.
    for (int floor = 0; floor < FLOORS_PER_BRANCH; ++floor) {
        int occupiedRooms = 0;

        for (int room = 0; room < ROOMS_PER_FLOOR; ++room) {
            if (occupancy[floor][room] == 1) {
                ++occupiedRooms;
            }
        }

        const int vacantRooms = ROOMS_PER_FLOOR - occupiedRooms;
        std::cout << "Floor " << floor + 1 << ": occupied = " << occupiedRooms
                  << ", vacant = " << vacantRooms << '\n';
    }
}

int simulateChainOccupancy(
    int chain[NUMBER_OF_BRANCHES][FLOORS_PER_BRANCH][ROOMS_PER_FLOOR]) {
    int totalOccupiedRooms = 0;

    // Fill every branch, floor, and room with a repeatable binary pattern.
    for (int branch = 0; branch < NUMBER_OF_BRANCHES; ++branch) {
        for (int floor = 0; floor < FLOORS_PER_BRANCH; ++floor) {
            for (int room = 0; room < ROOMS_PER_FLOOR; ++room) {
                chain[branch][floor][room] = (branch + floor + room) % 2;
                totalOccupiedRooms += chain[branch][floor][room];
            }
        }
    }

    return totalOccupiedRooms;
}

int main() {
    double revenue[DAYS_IN_WEEK]{};
    int occupancy[FLOORS_PER_BRANCH][ROOMS_PER_FLOOR]{};
    int chain[NUMBER_OF_BRANCHES][FLOORS_PER_BRANCH][ROOMS_PER_FLOOR]{};

    std::cout << "========== WEEKLY REVENUE TRACKER ==========\n";
    if (!inputWeeklyRevenue(revenue)) {
        return 1;
    }

    const double totalRevenue = calculateWeeklyRevenue(revenue);
    const double averageDailyRevenue = totalRevenue / DAYS_IN_WEEK;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total weekly revenue: KSh " << totalRevenue << '\n';
    std::cout << "Average daily revenue: KSh " << averageDailyRevenue << '\n';

    simulateOneBranchOccupancy(occupancy);
    displayFloorOccupancy(occupancy);

    const int totalOccupiedRooms = simulateChainOccupancy(chain);
    const int totalRooms = NUMBER_OF_BRANCHES * FLOORS_PER_BRANCH *
                           ROOMS_PER_FLOOR;

    std::cout << "\n========== MULTI-BRANCH OCCUPANCY ==========\n";
    std::cout << "Total occupied rooms: " << totalOccupiedRooms << '\n';
    std::cout << "Total vacant rooms:   " << totalRooms - totalOccupiedRooms
              << '\n';

    return 0;
}
