// Given an integer array `nums`, return an array `answer` such that
// `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

// The product of any prefix or suffix of the array is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and **without using the division operation**.


// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

// Constraints:
//     2 <= nums.length <= 10^5
//     -30 <= nums[i] <= 30
//     The result is guaranteed to fit in a 32-bit integer.

// Follow-up:
// Can you solve the problem using only O(1) extra space?
// (The output array does not count as extra space for the space complexity analysis.)

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Write your solution here
    }
};

// Helper function to print a vector
void printVector(const vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

// Helper function to run and validate test cases
void runTest(vector<int> nums, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Input: ";
    printVector(nums);
    cout << "Output: ";
    printVector(result);
    cout << "Expected: ";
    printVector(expected);

    assert(result == expected);
    cout << "Test passed.\n" << endl;
}

int main() {
    // Example test cases
    runTest({1, 2, 3, 4}, {24, 12, 8, 6});
    runTest({-1, 1, 0, -3, 3}, {0, 0, 9, 0, 0});

    // Add more custom test cases if needed
    // runTest({...}, {...});

    return 0;
}
