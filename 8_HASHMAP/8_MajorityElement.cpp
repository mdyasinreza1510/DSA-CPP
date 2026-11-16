//169
/*
LOGIC
1. CREATE A HASHMAP 
2. DEFINE N=NUMS.SIZE()/2;
3. ADD ALL THE ELEMNTS IN THE HADSHMAP
4. DEFINE ANS=0;
5. RUN A LOOP IN THE MAP
6. COMPARE IF ITS FREQ IS GREATER THAN IF TRUE THEN UPDATEELEMNT IN THE ANS
7. RETURN ANS...


*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n= nums.size()/2;
        for(int i=0;i<nums.size() ;i++){
            mp[nums[i]]++;
        }
        int ans=0;
     
        for(auto i:mp)
        {
            if(i.second >n)
            {
               ans=i.first;
            }

        }
        return ans;;
        
        // priority_queue<pair<int,int>>pq;

        // for(auto i:mp){
        //     pq.push({i.second,i.first});
        // }
        // return pq.top().second;
        
    }
};