class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        for (int i = 0; i < nums.size(); i++)
        {
            pq.push({nums[i], i}); // yaha pair me <value,index>csave kiya Taaki
                                   // value ke basis par compare ho sake.
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<pair<int, int>>
            arr; //<index,value> store krenge taki index k basis pe store krrske

        while (!pq.empty())
        {
            arr.push_back({pq.top().second, pq.top().first}); // <idx,value>
            pq.pop();
        }
        sort(arr.begin(), arr.end());

        vector<int> res; // to store only the value

        for (int i = 0; i < arr.size(); i++)
        {
            res.push_back(arr[i].second); // second=value of the idx
        }
        return res;
    }
};