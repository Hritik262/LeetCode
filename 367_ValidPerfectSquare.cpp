class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 1;
        int e = num;
        long int mid;
        bool ans = false;
        while(s <= e){
            mid = s + (e-s)/2;
            long long int sqr = mid*mid;
            if(sqr == num){
                ans = true;
                break;
            }
            else if(sqr > num){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};
// https://leetcode.com/problems/valid-perfect-square/