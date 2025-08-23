/*
------------------------
Valid Anagram

Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:
Input: s = "racecar", t = "carrace"
Output: true

Example 2:
Input: s = "jar", t = "jam"
Output: false

Constraints:
- s and t consist of lowercase English letters.

Time Complexity: O(n)
Space Complexity: O(n)
------------------------
*/


#include <iostream>
using namespace std;


class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        int count[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
                return false;
        }

        return true;
    }
};

int main()
{
    Solution solution;

    string s1 = "racecar", t1 = "carrace";
    string s2 = "jar", t2 = "jam";

    cout << boolalpha;
    cout << "Test 1: " << solution.isAnagram(s1, t1) << endl; // true
    cout << "Test 2: " << solution.isAnagram(s2, t2) << endl; // false

    return 0;
}
