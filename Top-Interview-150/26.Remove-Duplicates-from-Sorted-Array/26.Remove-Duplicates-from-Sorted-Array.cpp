// Given an integer array `nums` sorted in non-decreasing order,
// remove the duplicates **in-place** such that each unique element appears only once.

// The relative order of the elements should be preserved.

// Let the number of unique elements be `k`. To get your solution accepted, you must do the following:

//     Modify the array `nums` so that the first `k` elements contain the unique elements in the same order as in the original array.
//     The remaining elements and the size of the array do not matter.
//     Return `k`.

// Custom Judge:

// The judge will test your solution using the following code:

// int[] nums = [...];           // Input array
// int[] expectedNums = [...];   // The expected result with the correct length

// int k = removeDuplicates(nums); // Calls your implementation

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }

// If all assertions pass, your solution will be accepted.


// Example 1:

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2.
// It does not matter what you leave beyond the returned k (they're shown as underscores).

// Example 2:

// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements being 0, 1, 2, 3, and 4.
// The remaining values don't matter.

// Constraints:

//     1 <= nums.length <= 3 * 10^4
//     -100 <= nums[i] <= 100
//     nums is sorted in non-decreasing order


#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      // Write your solution here!
    }
};

// Helper function to print the first k elements of a vector
void printVector(const vector<int>& vec, int k) {
    cout << "[";
    for (int i = 0; i < k; ++i) {
        cout << vec[i];
        if (i < k - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> expectedNums = {0, 1, 2, 3, 4}; // Expected unique elements

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Returned k = " << k << endl;
    cout << "Modified nums (first k elements): ";
    printVector(nums, k);

    cout << "Expected nums: ";
    printVector(expectedNums, expectedNums.size());

    // Custom Judge Validation
    assert(k == expectedNums.size());
    for (int i = 0; i < k; ++i) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "All assertions passed. Test case succeeded!" << endl;
    return 0;
}
