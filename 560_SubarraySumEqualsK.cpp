class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> prefixSumCount;
        int prefixSum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];

            if (prefixSum == k) {
                count++;
            }

            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum - k];
            }

            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};
//https://leetcode.com/problems/subarray-sum-equals-k