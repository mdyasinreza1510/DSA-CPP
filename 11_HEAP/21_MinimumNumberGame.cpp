//2974
/*

Logic
- Hume har baar 2 smallest elements chahiye.
- Isliye Min Heap use karenge.
- Saare elements heap me push karo.
- Jab tak heap empty na ho:
  - Pehla smallest pop karo.
  - Dusra smallest pop karo.
  - Pehle dusra answer me add karo.
  - Fir pehla answer me add karo.
- Answer return kar do.
*/
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        priority_queue<int, vector<int>, greater<int>>pq;
        for (int i = 0 ; i < nums.size() ; i++){
            pq.push(nums[i]);
        }

        while(!pq.empty())
        {
            int one=pq.top();
            pq.pop();
            ans.push_back(pq.top());
            pq.pop();
            ans.push_back(one);
        }
        return ans;
        
    }
};