// Given an integer array `nums` sorted in non-decreasing order,
// remove some duplicates **in-place** such that each unique element appears at most **twice**.

// The relative order of the elements must be preserved.

// Since it's not possible to change the size of the array in some languages,
// the result should be stored in the first `k` elements of the original array `nums`.
// The values beyond the first `k` elements do not matter.

// Return `k`, the number of valid elements after removing the extra duplicates.

// Do not allocate extra space for another array — you must do this with O(1) extra memory.


// Custom Judge:

// The judge will test your solution using the following code:

// int[] nums = [...];           // Input array
// int[] expectedNums = [...];   // Expected result with the correct length

// int k = removeDuplicates(nums); // Calls your implementation

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }

// If all assertions pass, your solution will be accepted.


// Example 1:

// Input: nums = [1,1,1,2,2,3]
// Output: 5, nums = [1,1,2,2,3,_]
// Explanation: Return k = 5 with the first five elements being 1, 1, 2, 2, and 3.
// Values beyond index k do not matter.

// Example 2:

// Input: nums = [0,0,1,1,1,1,2,3,3]
// Output: 7, nums = [0,0,1,1,2,3,3,_,_]
// Explanation: Return k = 7 with the first seven elements being 0, 0, 1, 1, 2, 3, and 3.
// Values beyond index k do not matter.

// Constraints:

//     1 <= nums.length <= 3 * 10^4
//     -10^4 <= nums[i] <= 10^4
//     nums is sorted in non-decreasing order

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Write your solution here
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
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    vector<int> expectedNums = {0, 0, 1, 1, 2, 3, 3}; // Expected result (at most two of each number)

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Returned k = " << k << endl;
    cout << "Modified nums (first k elements): ";
    printVector(nums, k);

    cout << "Expected nums: ";
    printVector(expectedNums, expectedNums.size());

    // Validate against the expected output
    assert(k == expectedNums.size());
    for (int i = 0; i < k; ++i) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "All assertions passed. Test case succeeded!" << endl;
    return 0;
}
