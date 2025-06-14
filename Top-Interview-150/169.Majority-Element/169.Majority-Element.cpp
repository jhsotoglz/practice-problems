// Given an array `nums` of size `n`, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element **always exists** in the array.


// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


// Constraints:
//     n == nums.length
//     1 <= n <= 5 * 10^4
//     -10^9 <= nums[i] <= 10^9

// Follow-up:
// Could you solve the problem in linear time and O(1) space?

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Write your solution here!
    }
};

// Helper function to run a single test case
void runTest(vector<int> nums, int expected) {
    Solution sol;
    int result = sol.majorityElement(nums);

    cout << "Input: ";
    for (int num : nums) cout << num << " ";
    cout << "\nOutput: " << result << endl;
    cout << "Expected: " << expected << endl;

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({3, 2, 3}, 3);
    runTest({2, 2, 1, 1, 1, 2, 2}, 2);

    // Add more test cases if desired
    // runTest({...}, ...);

    return 0;
}
