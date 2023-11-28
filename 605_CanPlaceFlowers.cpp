class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        if (flowerbed[0] == 0 && (flowerbed.size() == 1 || flowerbed[1] == 0)) {
            count++;
            flowerbed[0] = 1;
        }
        if (flowerbed.back() == 0 && flowerbed[flowerbed.size() - 2] == 0) {
            count++;
            flowerbed.back() = 1;
        }
        for (int i = 1; i < flowerbed.size() - 1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                count++;
                flowerbed[i] = 1;
                i++;
            }
        }
        
        if(count >= n){
            return true;
        }
        else{
            return false;
        }
    }
};
//https://leetcode.com/problems/can-place-flowers