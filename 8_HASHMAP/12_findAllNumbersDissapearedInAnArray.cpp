//448

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_set<int> st;

        // Store all numbers
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }

        vector<int> ans;

        // Find missing numbers
        for(int i = 1; i <= nums.size(); i++){

            if(st.count(i) == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};