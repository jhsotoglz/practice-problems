// You are given a 0-indexed array of integers `nums` of length `n`.
// You are initially positioned at `nums[0]`.

// Each element `nums[i]` represents the maximum length of a forward jump from index `i`.
// In other words, if you're at index `i`, you can jump to any index `i + j` such that:
//     0 <= j <= nums[i] and i + j < n

// Return the minimum number of jumps to reach the last index `nums[n - 1]`.

// It is guaranteed that you can always reach the last index.


// Example 1:
// Input: nums = [2,3,1,1,4]
// Output: 2
// Explanation: Jump from index 0 -> 1, then 1 -> 4

// Example 2:
// Input: nums = [2,3,0,1,4]
// Output: 2

// Constraints:
//     1 <= nums.length <= 10^4
//     0 <= nums[i] <= 1000
//     You can always reach the last index

///////////
// Imports:

///////////

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        // Write your solution here!!!
    }
};

// Helper function to run and validate test cases
void runTest(vector<int> nums, int expected) {
    Solution sol;
    int result = sol.jump(nums);

    cout << "Input: ";
    for (int n : nums) cout << n << " ";
    cout << "\nOutput: " << result << endl;
    cout << "Expected: " << expected << endl;

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({2, 3, 1, 1, 4}, 2);
    runTest({2, 3, 0, 1, 4}, 2);

    // Add more custom test cases if needed
    // runTest({...}, ...);

    return 0;
}
