// Fibonacci Sequence Generator - Iterative Approach
// Demonstrates the classic Fibonacci algorithm: F(n) = F(n-1) + F(n-2)
// Time Complexity: O(n), Space Complexity: O(1)
#include <iostream>
using namespace std;

int main() {
    // Initialize the first two Fibonacci numbers
    // F(0) = 0, F(1) = 1
    int prev2 = 0, prev1 = 1;
    int newFibo; // Will store the next Fibonacci number

    // Output the base cases
    cout << prev2;
    cout << " | " << prev1;

    // Generate the next 18 Fibonacci numbers (F(2) through F(19))
    // This demonstrates the iterative approach which is more efficient
    // than recursion for this problem (avoids exponential time complexity)
    for(int fibo = 0; fibo < 18; fibo++) {
        // Core Fibonacci formula: each number is the sum of the two preceding ones
        newFibo = prev1 + prev2;
        
        // Output the newly computed number
        cout << " | " << newFibo;
        
        // Update variables for the next iteration (sliding window technique)
        // This maintains only the last two numbers, achieving O(1) space complexity
        prev2 = prev1;  // Shift: previous becomes current
        prev1 = newFibo; // Shift: current becomes new
    }

    return 0;
}
