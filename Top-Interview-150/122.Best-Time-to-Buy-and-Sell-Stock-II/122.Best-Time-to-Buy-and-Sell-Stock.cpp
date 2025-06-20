// You are given an integer array `prices` where `prices[i]` is the price of a given stock on the i-th day.

// On each day, you may decide to buy and/or sell the stock.
// You can only hold at most one share of the stock at any time.
// However, you can buy and then immediately sell on the same day.

// Return the maximum profit you can achieve.


// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation:
// Buy on day 2 (price = 1), sell on day 3 (price = 5), profit = 4
// Buy on day 4 (price = 3), sell on day 5 (price = 6), profit = 3
// Total profit = 4 + 3 = 7

// Example 2:
// Input: prices = [1,2,3,4,5]
// Output: 4
// Explanation: Buy on day 1, sell on day 5, profit = 4

// Example 3:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: No transactions are done, profit is 0

// Constraints:
//     1 <= prices.length <= 3 * 10^4
//     0 <= prices[i] <= 10^4

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Write your solution here
    }
};

// Helper function to run and validate test cases
void runTest(vector<int> prices, int expected) {
    Solution sol;
    int result = sol.maxProfit(prices);

    cout << "Input: ";
    for (int p : prices) cout << p << " ";
    cout << "\nOutput: " << result << endl;
    cout << "Expected: " << expected << endl;

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({7, 1, 5, 3, 6, 4}, 7);
    runTest({1, 2, 3, 4, 5}, 4);
    runTest({7, 6, 4, 3, 1}, 0);

    // Add more custom test cases if needed
    // runTest({...}, ...);

    return 0;
}
