// Implement the RandomizedSet class:

// - RandomizedSet() Initializes the RandomizedSet object.
// - bool insert(int val) Inserts a value into the set if not present. Returns true if inserted, false otherwise.
// - bool remove(int val) Removes a value from the set if present. Returns true if removed, false otherwise.
// - int getRandom() Returns a random element from the current set. All elements must have equal probability.

// You must implement all functions such that each runs in average O(1) time.


// Example:

// Input:
// ["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
// [[], [1], [2], [2], [], [1], [2], []]
// Output:
// [null, true, false, true, 2, true, false, 2]

// Explanation:
// RandomizedSet randomizedSet = new RandomizedSet();
// randomizedSet.insert(1);       // true
// randomizedSet.remove(2);       // false
// randomizedSet.insert(2);       // true
// randomizedSet.getRandom();     // returns 1 or 2 randomly
// randomizedSet.remove(1);       // true
// randomizedSet.insert(2);       // false (already present)
// randomizedSet.getRandom();     // returns 2

// Constraints:
// -2^31 <= val <= 2^31 - 1
// At most 2 * 10^5 operations will be made.
// getRandom will only be called when there is at least one element in the set.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

class RandomizedSet {
private:
    unordered_map<int, int> valToIndex;
    vector<int> data;

public:
    RandomizedSet() {
        // Solution here!
    }

    bool insert(int val) {
        // Solution here!
    }

    bool remove(int val) {
       // Solution here!
    }

    int getRandom() {
        // Solution here!
    }
};

// Example test harness
void runDemo() {
    RandomizedSet randomizedSet;

    assert(randomizedSet.insert(1) == true);
    assert(randomizedSet.remove(2) == false);
    assert(randomizedSet.insert(2) == true);

    int rand1 = randomizedSet.getRandom(); // should be 1 or 2
    assert(rand1 == 1 || rand1 == 2);

    assert(randomizedSet.remove(1) == true);
    assert(randomizedSet.insert(2) == false);

    int rand2 = randomizedSet.getRandom(); // should be 2
    assert(rand2 == 2);

    cout << "All tests passed.\n";
}

int main() {
    runDemo();
    return 0;
}
