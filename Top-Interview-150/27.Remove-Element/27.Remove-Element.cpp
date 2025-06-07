#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

// Declare your function here (implement it separately to practice)
int removeElement(vector<int>& nums, int val);

int main() {
    // Sample test case
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    vector<int> expectedNums = {0, 1, 4, 0, 3}; // Expected first k elements (order doesn't matter)

    int k = removeElement(nums, val); // Call your implementation

    // Check length
    assert(k == expectedNums.size());

    // Sort both for comparison (order doesn't matter in output)
    sort(nums.begin(), nums.begin() + k);
    sort(expectedNums.begin(), expectedNums.end());

    for (int i = 0; i < k; ++i) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "All assertions passed. Test case succeeded!" << endl;
    return 0;
}

// Your implementation goes below this line
int removeElement(vector<int>& nums, int val) {
    // TODO: Implement your solution here for practice
    return -1; // placeholder
}
