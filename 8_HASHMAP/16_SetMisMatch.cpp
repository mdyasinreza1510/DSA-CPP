//645
/*
Logic (Hinglish)
- Array me har number ko uski correct position (value-1) par hona chahiye.
- Isliye Cyclic Sort use karenge.
- Jab tak current number apni correct position par nahi hai aur us position par same number nahi pada hai, tab tak swap karte rahenge.
- Agar correct position par same number already hai, matlab duplicate mil gaya.
- Sorting ke baad array ko ek baar traverse karo.
- Jis index par nums[i] != i+1
  - nums[i] = duplicate
  - i+1 = missing
- Isi pair ko answer bana do.

*/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>mp;
        for(int i =1;i<=n;i++)mp[i]++;

        for(auto a :nums)mp[a]--;
        int duplicate  = 0,missing=0;

        for(auto a :mp){
            if(a.second == -1)duplicate = a.first;
            if(a.second == 1)missing = a.first;
        }

        return {duplicate,missing};
    }
};


