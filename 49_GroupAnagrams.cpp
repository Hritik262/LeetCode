class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> anagrams;

        for (string str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagrams[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (auto entry : anagrams) {
            result.push_back(entry.second);
        }

        return result;

    }
};
//https://leetcode.com/problems/group-anagrams/