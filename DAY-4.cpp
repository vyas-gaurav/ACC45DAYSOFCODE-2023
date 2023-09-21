#include <iostream>

using namespace std;

int calculateTotalAmount(int X, int Y) {
    int totalAmount = 0;
    
    if (Y <= X) {
        // Chef sells fewer chocolates than his daily goal
        totalAmount = Y; // 1 rupee for each chocolate sold
    } else {
        // Chef sells more chocolates than his daily goal
        totalAmount = X + 2 * (Y - X); // 1 rupee for the first X chocolates, 2 rupees for each extra chocolate
    }
    
    return totalAmount;
}

int main() {
    int X, Y;
    
    // Input values for daily goal (X) and number of chocolates sold (Y)
    cout << "Enter the daily goal (X): ";
    cin >> X;
    cout << "Enter the number of chocolates sold (Y): ";
    cin >> Y;
    
    // Calculate the total amount Chef made
    int totalAmount = calculateTotalAmount(X, Y);
    
    // Display the result
    cout << "The total amount Chef made is " << totalAmount << " rupees." << endl;
    
    return 0;
}

