class Solution {
public: //same question as 852. Peak Index in a Mountain Array
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while (low < high) {
            int guess = (low + high) / 2;
            if (nums[guess] < nums[guess + 1]) {
                low = guess + 1;
            } else {
            
                high=guess;
            }
        }
        return low;
    }
};