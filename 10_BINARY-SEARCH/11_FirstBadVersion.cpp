//278
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0;
        int high = n;
        int res;
        while (low <= high) {
            int guess =low+(high-low)/2;

            if (!isBadVersion(guess)) {// bad version aage hai
                low = guess + 1;
            } else {//bad version peche  hai;
                res = guess;
                high = guess - 1;
            }
        }
        return res;
    }
};