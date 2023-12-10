/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int s = 1;
        long int e = n;
        long int mid;
        int ans;
        while(ans != 0){
            mid = (s + e)/2;
            ans = guess(mid);
            if(ans == 0){
                break;
            }
            else if(ans == -1){
                e = mid-1;
            }
            else if(ans == 1){
                s = mid + 1;
            }
        }
        return mid;
    }
};
// https://leetcode.com/problems/guess-number-higher-or-lower/