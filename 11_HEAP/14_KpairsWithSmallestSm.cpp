//373
/*
Logic
- Hume smallest sum wale pairs chahiye.
- Isliye Min Heap use karenge.
- Heap me (sum, i, j) store karenge.
- Shuru me har row ka pehla pair (i,0) heap me push karenge.
- Heap ka top hamesha smallest sum hoga.
- Top pair ko answer me add karo.
- Agar us row me next element exist karta hai, to (i,j+1) heap me push kar do.
- Ye process k baar repeat karo ya heap empty hone tak.
- Isse unnecessary saare pairs generate nahi karne padte.
*/
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
//have to practice
        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > pq;

        for (int i = 0; i < nums1.size() && i < k; i++) {
            pq.push({nums1[i] + nums2[0], {i, 0}});
        }

        while (!pq.empty() && k > 0) {
            auto curr = pq.top();
            pq.pop();

            int i = curr.second.first;
            int j = curr.second.second;

            ans.push_back({nums1[i], nums2[j]});

            if (j + 1 < nums2.size()) {
                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
            }

            k--;
        }

        return ans;
    }
};