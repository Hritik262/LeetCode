class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());

        int longestSequence = 0;

        for(int i = 0; i < nums.size(); i++){
            if(set.find(nums[i]-1) == set.end()){
                int curr = nums[i];
                int sequence = 1;
                while(set.find(curr + 1) != set.end()){
                    curr++;
                    sequence++;
                }
                longestSequence = max(longestSequence, sequence);
            }
        }
        return longestSequence;
    }
};