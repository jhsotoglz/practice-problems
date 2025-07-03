// There are `n` children standing in a line.
// Each child has a rating value given in the integer array `ratings`.

// You are giving candies to these children with the following rules:
//   1. Each child must get at least one candy.
//   2. Children with a higher rating than their neighbors must get more candies.

// Return the **minimum number of candies** you need to distribute to satisfy all the conditions.


// Example 1:
// Input: ratings = [1, 0, 2]
// Output: 5
// Explanation: You can give [2, 1, 2] candies.

// Example 2:
// Input: ratings = [1, 2, 2]
// Output: 4
// Explanation: You can give [1, 2, 1] candies.

// Constraints:
//   n == ratings.length
//   1 <= n <= 2 * 10^4
//   0 <= ratings[i] <= 2 * 10^4

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n = ratings.size();
        vector<int> candies(n, 1);

        // Left to right
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // Right to left
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        int total = 0;
        for (int c : candies) total += c;
        return total;
    }
};

// Helper function to run and validate test cases
void runTest(vector<int> ratings, int expected) {
    Solution sol;
    int result = sol.candy(ratings);

    cout << "Ratings: ";
    for (int r : ratings) cout << r << " ";
    cout << "\nOutput: " << result << endl;
    cout << "Expected: " << expected << endl;

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({1, 0, 2}, 5);
    runTest({1, 2, 2}, 4);

    // Add more test cases if needed
    // runTest({...}, ...);

    return 0;
}
