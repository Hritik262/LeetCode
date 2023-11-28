class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if(text.length() < 7){
            return 0;
        }
        unordered_map<char, int> map;
        for(int i = 0; i < text.length(); i++){
            map[text[i]]++;
        }

        int count = 0;
        string word = "balloon";
        bool en = true;

        while(en){
            for(int i = 0; i < word.length(); i++){
                char c = word[i];
                if(map.count(c) > 0 && map[c] > 0){
                    map[c]--;
                }
                else{
                    en = false;
                    break;
                }
            }
            if(en){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};
// https://leetcode.com/problems/maximum-number-of-balloons