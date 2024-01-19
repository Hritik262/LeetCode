class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0, j = 0, count = 0, sum = 0;
        while(j < arr.size()){
            sum += arr[j];
            
            if(j - i + 1 < k){
                j++;
            }
            else{
                int avg = sum / k;
                if(avg >= threshold){
                    count++;
                }
                sum -= arr[i];
                i++;
                j++;
            }
        }
        return count;
    }
};
// https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/