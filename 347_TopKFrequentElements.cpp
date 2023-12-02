class Solution {

    // Define the custom node structure
    struct node {
        int no;
        int freq;
        node(int a, int b){
            no = a;
            freq = b;
        }
    };

    // Define the custom comparison function
    struct compare {
        bool operator()(const node& a, const node& b) {
            return a.freq < b.freq;
        }
    };

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        // Build heap
        priority_queue<node, vector<node>, compare> heap;

        for(auto it: map){
            heap.push(node(it.first, it.second));
        }

        vector<int> ans;

        //Pop top-k elements and store the numbers in ans vector
        while(k--){
            node temp = heap.top();
            heap.pop();
            ans.push_back(temp.no);
        }
        return ans;
    }
};