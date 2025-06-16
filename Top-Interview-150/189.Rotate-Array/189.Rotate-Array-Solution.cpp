// Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// Rotate 1 step to the right: [7,1,2,3,4,5,6]
// Rotate 2 steps to the right: [6,7,1,2,3,4,5]
// Rotate 3 steps to the right: [5,6,7,1,2,3,4]

// Example 2:
// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation:
// Rotate 1 step to the right: [99,-1,-100,3]
// Rotate 2 steps to the right: [3,99,-1,-100]

// Constraints:
//     1 <= nums.length <= 10^5
//     -2^31 <= nums[i] <= 2^31 - 1
//     0 <= k <= 10^5

// Follow-up:
// Try to come up with as many solutions as you can.
// There are at least three different ways to solve this problem.
// Can you do it in-place with O(1) extra space?

#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k %= n; // In case k is larger than n

        // Helper lambda to reverse part of the array
        auto reverse = [](vector<int>& arr, int start, int end) {
            while (start < end) {
                swap(arr[start++], arr[end--]);
            }
        };

        reverse(nums, 0, n - 1);       // Step 1: Reverse the entire array
        reverse(nums, 0, k - 1);       // Step 2: Reverse the first k elements
        reverse(nums, k, n - 1);       // Step 3: Reverse the rest
    }
};

// Helper function to compare and print arrays
void runTest(vector<int> nums, int k, vector<int> expected) {
    Solution sol;
    sol.rotate(nums, k);

    cout << "Input k = " << k << endl;
    cout << "Output:   ";
    for (int n : nums) cout << n << " ";
    cout << "\nExpected: ";
    for (int n : expected) cout << n << " ";
    cout << endl;

    assert(nums == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({1, 2, 3, 4, 5, 6, 7}, 3, {5, 6, 7, 1, 2, 3, 4});
    runTest({-1, -100, 3, 99}, 2, {3, 99, -1, -100});

    // You can add more test cases here
    // runTest({...}, k, {...});

    return 0;
}
