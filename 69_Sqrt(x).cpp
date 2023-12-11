class Solution {
public:
    int mySqrt(int x) {
        if(x == 0){
            return x;
        }
        int s = 1, e = x, mid;
        bool ans = false;
        while(s <= e){
            mid = s + (e-s)/2;
            if(mid == x / mid){ 
                return mid;
            }
            else if(mid > x / mid){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        } 
        return e;
    }
};
// https://leetcode.com/problems/sqrtx/