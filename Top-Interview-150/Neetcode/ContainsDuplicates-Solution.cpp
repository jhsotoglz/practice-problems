#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

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

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.find(num) != seen.end())
            {
                return true; // found a duplicate
            }
            seen.insert(num); // add the number to the set
        }
        return false; // no duplicates found after full loop
    }
};

int main()
{
    Solution solution;

    vector<int> test1 = {1, 2, 3, 3};
    vector<int> test2 = {1, 2, 3, 4};

    cout << boolalpha;
    cout << "Test 1: " << solution.hasDuplicate(test1) << endl; // true
    cout << "Test 2: " << solution.hasDuplicate(test2) << endl; // false

    return 0;
}
