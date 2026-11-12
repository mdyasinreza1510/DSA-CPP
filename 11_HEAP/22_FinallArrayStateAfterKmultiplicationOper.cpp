//3264

/*
Logic
- Hume har baar smallest element chahiye.
- Agar value same ho to smallest index chahiye.
- Isliye Min Heap use karenge.
- Heap me (value, index) store karenge.
- Pair automatically pehle value compare karega, fir index.
- Har operation:
  - Top pair pop karo.
  - Value ko multiplier se multiply karo.
  - Array me update karo.
  - Updated (value,index) dobara heap me push karo.
- k operations ke baad array return kar do.

*/


class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        for( int i=0; i<nums.size();i++){
            pq.push({nums[i],i});//<element, index>
        }
        while(k--)
        {
            int topel=pq.top().first;

            int idx=pq.top().second;

            pq.pop();

            topel*=multiplier;

            nums[idx]= topel;

            pq.push({topel,idx});
        }
     return nums;
    }
};