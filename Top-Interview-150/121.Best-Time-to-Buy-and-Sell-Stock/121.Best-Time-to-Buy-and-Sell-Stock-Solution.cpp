// You are given an array `prices` where `prices[i]` is the price of a given stock on the i-th day.

// You want to maximize your profit by choosing a single day to **buy** one stock 
// and choosing a different day in the future to **sell** that stock.

// Return the maximum profit you can achieve from this transaction.
// If no profit is possible, return 0.


// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5.

// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: No transactions are made; no profit is possible.

// Constraints:
//     1 <= prices.length <= 10^5
//     0 <= prices[i] <= 10^4

///////////
// Imports:

///////////

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }

        return maxProfit;
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
    runTest({7, 1, 5, 3, 6, 4}, 5);
    runTest({7, 6, 4, 3, 1}, 0);

    // Add more custom test cases if needed
    // runTest({...}, ...);

    return 0;
}
