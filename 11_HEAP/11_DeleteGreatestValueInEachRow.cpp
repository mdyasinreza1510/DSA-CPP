//2500

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector<priority_queue<int>>heaps;//vector me hr row k heap ko add krenge
        for(int i=0;i<grid.size();i++){

            priority_queue<int>pq;//hr row keliye ek maxheap

            for(int j=0;j<grid[0].size();j++){
                pq.push(grid[i][j]);//ek row k sb elm ek heap me ,durse row k el dusre heap me
            }
            heaps.push_back(pq);//vector me hr row ka heap  push krdiya
        }
        int ans=0;
        
        while(!heaps[0].empty())//jb tk vecctor ka 0th el empty na hojaye
        {
            int mx=0;

            for(int i=0;i<heaps.size();i++)
            {
                mx=max(mx,heaps[i].top());
                heaps[i].pop();
                
            }
            ans=ans+mx;
        }
        return ans;
    }
};


/* visual 

heaps
│
├── Heap 0  →  4
│             2
│             1
│
├── Heap 1  →  8
│             6
│             3
│
└── Heap 2  →  9
              7
              5

vector
   ↓
+-------+-------+-------+
| Heap0 | Heap1 | Heap2 |
+-------+-------+-------+

heaps[0].top();   // 4
heaps[1].top();   // 8
heaps[2].top();   // 9
              */