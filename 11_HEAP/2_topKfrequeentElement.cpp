class Solution {
public:

/*1- sbse pehle ek hashmap me sb elements ki freq ko add krelnege
  2- uske baad ek min heap banayenge 
  3- ab map me loop lagayenge aur heap me <frequency,element> is order me push krenge 
  4- ab kya hoga min heap khud smaleest frequency ko uper rkhega aur highest ko neche 
  5- aur jaise hi heap ka size k se bada hoga uper ke element ko pop krdenge joki small hoga neche wale se
  6- aise hi heap me do elements hmesha rhege aur loop end hone k baad jo last two  elements nachnege wohamare   most frequentelements honge 

  7- ab ek vector banayenge aur heap me loop laga ke jb tk heap empty nahi hoojata pair ke second ko extract krelneg (element) aur fir usko pop() krdenge taki dusra elm. fir nikaal ske 
  */
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        // Count frequency
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        // Min Heap -> {frequency, number}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        // Traverse frequency map
        for(auto i : mp){

            pq.push({i.second, i.first});

            // Keep only k elements
            if(pq.size() > k){
                pq.pop();
            }
        }

        vector<int> res;

        // Extract answer
        while(!pq.empty()){

            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};