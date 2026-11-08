//2558
/*
. Logic
- Hume har baar largest pile chahiye.
- Isliye Max Heap use karenge.
- Saare gifts heap me push kar do.
- k times:
  - Heap ka top (largest pile) nikalo.
  - floor(sqrt(top)) calculate karo.
  - Nayi value heap me wapas push kar do.
- End me heap ke saare elements ka sum nikaal lo.
- Answer return kar do.

*/

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        while(k--){
            int curr=pq.top();
            pq.pop();
            curr =sqrt(curr);
            pq.push(curr);

        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};