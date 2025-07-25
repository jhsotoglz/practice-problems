#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
------------------------
Group Anagrams

Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:
Input: strs = ["act", "pots", "tops", "cat", "stop", "hat"]
Output: [["hat"], ["act", "cat"], ["stop", "pots", "tops"]]

Example 2:
Input: strs = ["x"]
Output: [["x"]]

Example 3:
Input: strs = [""]
Output: [[""]]

Constraints:
- 1 <= strs.length <= 1000
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters

Time Complexity: O(n * k log k), where n = number of strings and k = max string length
Space Complexity: O(n * k)
------------------------
*/

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> groups;

        for (string word : strs)
        {
            string key = word;
            sort(key.begin(), key.end()); // sorted characters act as key
            groups[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto &entry : groups)
        {
            result.push_back(entry.second);
        }

        return result;
    }
};

int main()
{
    Solution solution;

    vector<string> strs1 = {"act", "pots", "tops", "cat", "stop", "hat"};
    vector<string> strs2 = {"x"};
    vector<string> strs3 = {""};

    vector<vector<string>> result1 = solution.groupAnagrams(strs1);
    vector<vector<string>> result2 = solution.groupAnagrams(strs2);
    vector<vector<string>> result3 = solution.groupAnagrams(strs3);

    auto printGroups = [](const vector<vector<string>> &groups) {
        for (const auto &group : groups)
        {
            cout << "[ ";
            for (const auto &word : group)
                cout << word << " ";
            cout << "]" << endl;
        }
    };

    cout << "Result 1:" << endl;
    printGroups(result1);
    cout << "\nResult 2:" << endl;
    printGroups(result2);
    cout << "\nResult 3:" << endl;
    printGroups(result3);

    return 0;
}
