class Solution {
public:    
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }  
        int key = INT_MIN;
        int pair = INT_MIN;
        for(auto &x : count){
            if(x.second > pair){
                key = x.first;
                pair = x.second;
            }
        } 
        return key;
    }
};