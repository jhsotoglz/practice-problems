/*
------------------------
Two Sum

Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

Example 1:
Input: nums = [3, 4, 5, 6], target = 7
Output: [0, 1]

Example 2:
Input: nums = [4, 5, 6], target = 10
Output: [0, 2]

Example 3:
Input: nums = [5, 5], target = 10
Output: [0, 1]

Constraints:
- 2 <= nums.length <= 1000
- -10,000,000 <= nums[i] <= 10,000,000
- -10,000,000 <= target <= 10,000,000

Time Complexity: O(n)
Space Complexity: O(n)
------------------------
*/

///////////
// Imports:

///////////


class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Solution Here!!!
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {3, 4, 5, 6};
    int target1 = 7;

    vector<int> result = solution.twoSum(nums1, target1);

    cout << "Indices: " << result[0] << " " << result[1] << endl; // Correct Output: [0, 1]

    return 0;
}
