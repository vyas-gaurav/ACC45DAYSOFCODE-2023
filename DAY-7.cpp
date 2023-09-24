#include <iostream>

int main() {
    int followingCount, followerCount;

    // Input the following and follower counts
    std::cout << "Enter the following count: ";
    std::cin >> followingCount;
    std::cout << "Enter the follower count: ";
    std::cin >> followerCount;

    // Check if it's a spam account
    if (followingCount > 10 * followerCount) {
        std::cout << "This is a spam account." << std::endl;
    } else {
        std::cout << "This is not a spam account." << std::endl;
    }

    return 0;
}

