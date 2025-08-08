// You are given an integer array `nums`.
// You are initially positioned at the first index of the array.

// Each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.


// Example 1:
// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

// Example 2:
// Input: nums = [3,2,1,0,4]
// Output: false
// Explanation: You will always reach index 3, but cannot move further since nums[3] = 0.

// Constraints:
//     1 <= nums.length <= 10^4
//     0 <= nums[i] <= 10^5

///////////
// Imports:

///////////

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        // Write your solution here!!
    }
};

// Helper function to run and validate test cases
void runTest(vector<int> nums, bool expected) {
    Solution sol;
    bool result = sol.canJump(nums);

    cout << "Input: ";
    for (int n : nums) cout << n << " ";
    cout << "\nOutput: " << (result ? "true" : "false") << endl;
    cout << "Expected: " << (expected ? "true" : "false") << endl;

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({2, 3, 1, 1, 4}, true);
    runTest({3, 2, 1, 0, 4}, false);

    // Add more test cases if needed
    // runTest({...}, ...);

    return 0;
}
