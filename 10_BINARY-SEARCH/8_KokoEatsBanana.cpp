//875
class Solution {
public:
    long long fun(vector<int>& a, int n, int speed) {
        long long h = 0;

        for (int i = 0; i < n; i++) {

            // Complete hours
            h = h + a[i] / speed;

            // Remaining bananas need one more hour
            if (a[i] % speed != 0) {
                h++;
            }
        }

        return h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;

        int mx = 0;

        int res = -1;

        int n = piles.size();

        // Find maximum pile
        for (int i = 0; i < n; i++) {
            mx = max(mx, piles[i]);
        }

        int high = mx;

        while (low <= high) {

            int guess = (low + high) / 2;

            // Hours required at current speed
            int hour = fun(piles, n, guess);

            if (hour > h) {

                // Speed is too slow
                low = guess + 1;
            } else {

                // Possible answer
                res = guess;

                // Try smaller speed
                high = guess - 1;
            }
        }

        return res;
    }
};