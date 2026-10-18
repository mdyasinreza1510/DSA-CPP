//374
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
        int low = 1;
        int high = n;
        int result;
        while (low <= high) {
            int myguess = low + (high - low) / 2;
            result = guess(myguess);
            if (result == 0) {
                return myguess;
            } else if (result == -1) {
                high = myguess - 1;
            } else {
                low = myguess + 1;
            }
        }
        return -1;
    }
};