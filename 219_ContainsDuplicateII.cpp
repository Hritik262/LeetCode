class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int j = 0;
        while(j < nums.size()){
            if(map.find(nums[j]) != map.end()){
                if(abs(map[nums[j]] - j) <= k){
                    return true;
                }
            }
            map[nums[j]] = j;
            j++;
        }
        return false;
    }
};
// https://leetcode.com/problems/contains-duplicate-ii/