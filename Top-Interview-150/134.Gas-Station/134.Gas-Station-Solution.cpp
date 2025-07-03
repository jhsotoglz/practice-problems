// There are `n` gas stations along a circular route,
// where the amount of gas at the i-th station is `gas[i]`.

// You have a car with an unlimited gas tank, but it costs `cost[i]` of gas to travel from station i to station i+1.

// You start the journey with an empty tank at one of the stations.

// Return the index of the gas station to start at in order to travel the full circuit once clockwise,
// or return -1 if it's not possible.

// If a solution exists, it is guaranteed to be unique.

// Example 1:
// Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
// Output: 3
// Explanation:
// Start at station 3 -> tank = 4
// Travel to 4 -> tank = 4 - 1 + 5 = 8
// Travel to 0 -> tank = 8 - 2 + 1 = 7
// Travel to 1 -> tank = 7 - 3 + 2 = 6
// Travel to 2 -> tank = 6 - 4 + 3 = 5
// Travel to 3 -> tank = 5 - 5 = 0

// Example 2:
// Input: gas = [2,3,4], cost = [3,4,3]
// Output: -1
// Explanation: No starting point can complete the loop.

// Constraints:
//   n == gas.length == cost.length
//   1 <= n <= 10^5
//   0 <= gas[i], cost[i] <= 10^4
//   The input is generated such that the answer is unique.

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {

        int totalGas = 0;
        int totalCost = 0;
        int start = 0;
        int tank = 0;

        for (int i = 0; i < gas.size(); ++i)
        {
            totalGas += gas[i];
            totalCost += cost[i];
            tank += gas[i] - cost[i];

            // If tank is negative, can't reach next station from current start
            if (tank < 0)
            {
                start = i + 1;
                tank = 0;
            }
        }

        if (totalGas >= totalCost)
        {
            return start;
        }
        else
        {
            return -1;
        }
    }
};

// Helper function to run and validate test cases
void runTest(vector<int> gas, vector<int> cost, int expected)
{
    Solution sol;
    int result = sol.canCompleteCircuit(gas, cost);

    cout << "Gas: ";
    for (int g : gas)
        cout << g << " ";
    cout << "\nCost: ";
    for (int c : cost)
        cout << c << " ";
    cout << "\nOutput: " << result << endl;
    cout << "Expected: " << expected << endl;

    assert(result == expected);
    cout << "Test passed.\n"
         << endl;
}

int main()
{
    // Example test cases
    runTest({1, 2, 3, 4, 5}, {3, 4, 5, 1, 2}, 3);
    runTest({2, 3, 4}, {3, 4, 3}, -1);

    // Add more custom test cases if needed
    // runTest({...}, {...}, ...);

    return 0;
}
