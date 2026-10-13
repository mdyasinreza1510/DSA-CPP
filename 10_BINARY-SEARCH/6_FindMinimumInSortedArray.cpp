//153
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int res;
        while (low <= high) {
            int guess = (low + high) / 2;
            if (nums[guess] > nums[n - 1]) {// the el are in part2 so we need to look ahed to find the smaller(1)
                low = guess + 1;
            } else {//and vise-versa
               res = guess;
                high = guess - 1;
                
            }
        }
        return nums[res];
    }
};