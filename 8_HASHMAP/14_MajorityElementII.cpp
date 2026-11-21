//229

/*
LOGIC 
1  ADD ALL ELEMNT IN THE HASHMAP
2  CREATE AN INT LIMIT =NUMS.SIZE()/3
3  RUN A LOOP IN THE HASHMAP 
4  IF THE FREQ OF THE ELEMT IS GREATER THAN THE  LIMIT THEN AD IT TO THE ANS 

*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        long long limit=n/3;
        for(auto i:mp)
        {
            if (i.second> limit)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};