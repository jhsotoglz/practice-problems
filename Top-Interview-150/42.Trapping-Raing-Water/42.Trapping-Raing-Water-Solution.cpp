// Given `n` non-negative integers representing an elevation map,
// where the width of each bar is 1,
// compute how much water it can trap after raining.


// Example 1:
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation:
// The above elevation map is represented by the array.
// In this case, 6 units of rain water are being trapped between the bars.

// Example 2:
// Input: height = [4,2,0,3,2,5]
// Output: 9

// Constraints:
//   n == height.length
//   1 <= n <= 2 * 10^4
//   0 <= height[i] <= 10^5

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        // Write your solution here
    }
};

// Helper function to run and validate test cases
void runTest(vector<int> height, int expected) {
    Solution sol;
    int result = sol.trap(height);

    cout << "Height: ";
    for (int h : height) cout << h << " ";
    cout << "\nOutput: " << result << endl;
    cout << "Expected: " << expected << endl;

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({0,1,0,2,1,0,1,3,2,1,2,1}, 6);
    runTest({4,2,0,3,2,5}, 9);

    // Add more test cases if needed
    // runTest({...}, ...);

    return 0;
}
