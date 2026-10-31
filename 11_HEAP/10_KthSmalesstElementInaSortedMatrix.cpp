
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)//matrix ko traverse krke saree eemnt ko heap me add krte gye 
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)//jaise hi heap ka size kth element se zyada hoga top ko remove krnge kyu ki top elem hmehsa bda hoga sorted hone ki wjh se 
                {
                    pq.pop();
                }
            }
        }
        return pq.top();//top me always kth elemnt hoga isiloiye  top return krnge
    }
};