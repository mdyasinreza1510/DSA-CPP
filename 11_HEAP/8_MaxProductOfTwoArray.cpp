//1464

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;//min heap  ka use krenge tki hme max elemnts of array mile
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);//heap me sare elements add kiye
            if (pq.size() > 2) {//jaise hi heap ka size 2 se zyada top ka element nikal diye taki sirf 2 indices mile
                pq.pop();
            }
        }
        vector<int> res;//result vector banaye
        int ans = 1;
        while (!pq.empty()) {
            res.push_back(pq.top() - 1);//qsn k according nums[i]-1*nums[j]-1 elem ko bana k res me add krenge 
            pq.pop();
        }
        for (int i = 0; i < res.size(); i++) {
            ans *= res[i];// ab loop lagayenge arr me aur dono elemnt ko multioly kredenge 
        }
        return ans;
    }
};