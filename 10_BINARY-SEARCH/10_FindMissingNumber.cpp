//268
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        sort(nums.begin(),nums.end());
        while(low<=high)
        {
            int guess=(low+high)/2;
            if(nums[guess]==guess)
            {
                low=guess+1;
            }
             else
            {
                high=guess-1;
            }
        }
        return low;
    }
};