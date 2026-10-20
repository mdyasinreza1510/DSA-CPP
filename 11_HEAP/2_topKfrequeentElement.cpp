class Solution {
public:
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