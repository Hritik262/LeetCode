class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        int i = 0, j = 0;
        while(i < word1.length() && j < word2.length()){
            ans += word1[i];
            ans += word2[i];
            i++;
            j++;
        }
        
        if(i < word1.length()){
            for(int x = i; x < word1.length(); x++){
                ans += word1[x];
            }
        }
        else if(j < word2.length()){
            for(int x = j; x < word2.length(); x++){
                ans += word2[x];
            }
        }
        return ans;
    }
};
// https://leetcode.com/problems/merge-strings-alternately/