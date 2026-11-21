//442
/*
logic
1  sare elm ko hashmap me add kro
2  hashmapme loop lagao 
3  agar frequency >=2 hua usko ans am add krdo 
4  ans ko retiurn krdo */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second>=2)
            {
                ans.push_back(i.first);
            }
        }
        return ans ;
    }
};