class Solution {
public:
    void heapify(vector<int>& nums, int N, int i){
        //taking a node to its correct position
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < N && nums[l] > nums[largest])
            largest = l;

        if (r < N && nums[r] > nums[largest])
            largest = r;
    
        if (largest != i) {
            swap(nums[i], nums[largest]);
            heapify(nums, N, largest);
        }
 
    }
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        for(int i = size/2 - 1 ; i >= 0; i--){
            heapify(nums, size, i);
        }
        
        for(int i = size-1; i > 0; i--){
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }

        return nums;
    }
};
// https://leetcode.com/problems/sort-an-array/description/