/*
------------------------
Contains Duplicate

Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:
Input: nums = [1, 2, 3, 3]
Output: true

Example 2:
Input: nums = [1, 2, 3, 4]
Output: false

Time Complexity: O(n)
Space Complexity: O(n)
------------------------
*/

///////////
// Imports:

///////////

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Write your solution here!!!
    }
};

int main() {
    Solution solution;

    vector<int> test1 = {1, 2, 3, 3};
    vector<int> test2 = {1, 2, 3, 4};

    cout << boolalpha;
    cout << "Test 1: " << solution.hasDuplicate(test1) << endl; // true
    cout << "Test 2: " << solution.hasDuplicate(test2) << endl; // false

    return 0;
}
