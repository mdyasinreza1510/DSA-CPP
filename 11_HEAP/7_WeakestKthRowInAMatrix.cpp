// Logic
// - Har row me soldiers count karo.
// - Heap me (soldiers, row_index) pair store karo.
// - Hume smallest soldiers chahiye.
// - Isliye Max Heap of size k use karenge.
// - Har row ko heap me push karo.
// - Agar heap ka size k se bada ho jaye, to top remove kar do.
// - Max Heap ka top hamesha strongest row hoga, isliye wahi remove hoga.
// - Loop ke end me heap me sirf k weakest rows bachengi.
// - Heap se indices nikaalo.
// - Kyunki Max Heap se strongest pehle nikalta hai, answer ko reverse kar do.

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

       priority_queue<pair<int,int>>pq;//max heap banaya

       for(int i=0;i<mat.size();i++){//outer loop row k index store keliye banaye
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if (mat[i][j]==1)// eg:- mat[0][0]=1,mat[1][0]=0,
                {
                    count++;
                }
            }
            pq.push({count,i});//jaise 1st row ka {2,0} ,2nd row {4,1} 
            if(pq.size()>k)
            {
                pq.pop();
            }
        } 
        vector<int>res;//arr banaye ans store krne keliye 
        while(!pq.empty())
        {
            res.push_back(pq.top().second);//kth rows ko push kiye  
            pq.pop();
        }
        reverse(res.begin(), res.end());//reverse krke exact ans nikal liye 

        return res;
    }
};