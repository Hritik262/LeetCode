class Solution {
public:
    int lengthOfLastWord(string s) {
        char sp = ' ';
        int countPrev = 0;
        int countCurr = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == sp){
                countCurr = 0;
            }
            else{
                countCurr++;
                countPrev = countCurr;
            }
        }  
        return countPrev;  
    }
};
//https://leetcode.com/problems/length-of-last-word/