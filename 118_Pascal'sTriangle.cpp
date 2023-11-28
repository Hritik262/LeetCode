class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer(numRows);

        for(int i = 0; i < numRows; i++){
            vector<int> ans;
            
            for(int j = 0; j <= i; j++){                
                if(j == 0 || j == i){
                    ans.push_back(1);
                }
                else{
                    ans.push_back(answer[i-1][j-1] + answer[i-1][j]);
                }                
            }
            answer[i] = ans;
        }        
        return answer;
    }
};
//https://leetcode.com/problems/pascals-triangle/description/