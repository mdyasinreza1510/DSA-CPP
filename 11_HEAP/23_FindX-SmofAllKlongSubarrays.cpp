// . Logic
// - Traverse every window of size k.
// - Count frequencies using unordered_map.
// - Push every (frequency, value) into a Max Heap.
// - Heap automatically keeps:
//   - Higher frequency first.
//   - If frequency equal → larger value first.
// - Pop x elements from heap.
// - Add

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {

        vector<int> ans;

        for(int i = 0; i <= nums.size() - k; i++){

            unordered_map<int,int> mp;

            for(int j = i; j < i + k; j++){
                mp[nums[j]]++;
            }

            priority_queue<pair<int,int>> pq;

            for(auto it : mp){
                pq.push({it.second, it.first});
            }

            int sum = 0;
            int cnt = x;

            while(cnt-- && !pq.empty()){

                sum += pq.top().first * pq.top().second;
                pq.pop();
            }

            ans.push_back(sum);
        }

        return ans;
    }
};