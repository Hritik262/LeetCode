class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for(auto x: s){
            count[x]++;
        }
        for(auto y: t){
            count[y]--;
        }
        for(auto z: count)
        {
            if(z.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};