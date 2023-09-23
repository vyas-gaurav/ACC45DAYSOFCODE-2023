#include <iostream>
#include <cmath>

int main() {
    int numFriends;
    std::cout << "Enter the number of friends: ";
    std::cin >> numFriends;

    int carsNeeded = static_cast<int>(std::ceil(static_cast<double>(numFriends) / 4));
    
    std::cout << "Minimum number of cars required: " << carsNeeded << std::endl;

    return 0;
}

