// Given an array of integers `citations` where `citations[i]` is the number of citations 
// a researcher received for their i-th paper, return the researcher's h-index.

// According to the definition on Wikipedia:
// The h-index is defined as the maximum value of `h` such that the given researcher has 
// published at least `h` papers that have each been cited at least `h` times.


// Example 1:
// Input: citations = [3,0,6,1,5]
// Output: 3
// Explanation: The researcher has 5 papers with 3, 0, 6, 1, and 5 citations.
// They have 3 papers with at least 3 citations each. So, h-index = 3.

// Example 2:
// Input: citations = [1,3,1]
// Output: 1

// Constraints:
//     n == citations.length
//     1 <= n <= 5000
//     0 <= citations[i] <= 1000

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        // Write your solution here!!!
    }
};

// Helper function to run and validate test cases
void runTest(vector<int> citations, int expected) {
    Solution sol;
    int result = sol.hIndex(citations);

    cout << "Input: ";
    for (int c : citations) cout << c << " ";
    cout << "\nOutput: " << result << endl;
    cout << "Expected: " << expected << endl;

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({3, 0, 6, 1, 5}, 3);
    runTest({1, 3, 1}, 1);

    // Add more custom test cases if needed
    // runTest({...}, ...);

    return 0;
}
