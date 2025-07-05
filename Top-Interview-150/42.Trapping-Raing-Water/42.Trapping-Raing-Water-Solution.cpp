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
        
        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int waterTrapped = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    waterTrapped += leftMax - height[left];
                }
                ++left;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    waterTrapped += rightMax - height[right];
                }
                --right;
            }
        }

        return waterTrapped;

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
