class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int prefixSumFromStart[n];
        prefixSumFromStart[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefixSumFromStart[i] = prefixSumFromStart[i-1] + nums[i];
        }

        int prefixSumFromEnd[n];
        prefixSumFromEnd[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            prefixSumFromEnd[i] = prefixSumFromEnd[i+1] + nums[i];
        }

        int count = -1;
        for(int i = 0; i < n; i++){
            if(prefixSumFromStart[i] == prefixSumFromEnd[i]){
                count = i;
                break;
            }
        }
        return count;
    }
};
// https://leetcode.com/problems/find-pivot-index/