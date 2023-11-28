class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i = 0; i < nums1.size(); i++){
            int z = -1;
            int pos = -1;
            for(int j = 0; j < nums2.size(); j++){
                if(nums2[j] == nums1[i]){
                    z = j;
                    j++;
                }
                if(nums2[j] > nums2[i] && z != -1){
                    pos = j;
                }
            }
            if(pos != -1){
                arr.push_back(nums2[pos]);
            }
            else{
                arr.push_back(-1);
            }
        }
        return arr;
    }
};
//https://leetcode.com/problems/next-greater-element-i