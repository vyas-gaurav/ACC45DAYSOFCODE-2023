#include <iostream>

int main() {
    int batteryLevel;

    // Input the battery level as a percentage
    std::cout << "Enter the battery level in percentage: ";
    std::cin >> batteryLevel;

    // Check if the battery level is 15% or less
    if (batteryLevel <= 15) {
        std::cout << "Battery Low notification will be displayed." << std::endl;
    } else {
        std::cout << "Battery Low notification will not be displayed." << std::endl;
    }

    return 0;
}
