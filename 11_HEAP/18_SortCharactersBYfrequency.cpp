/*
lc451

Logic
- HashMap se har character ki frequency count karo.
- Max Heap banao.
- Heap me (frequency, character) store karo.
- Max Heap hamesha highest frequency ko top par rakhega.
- Jab tak heap empty na ho:
  - Top pair nikalo.
  - Character ko frequency times answer string me add karo.
- Final string return kar do.


*/


class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0; i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;

        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(!pq.empty()){
          int fr=pq.top().first;
          char ch=pq.top().second;
          pq.pop();
          while(fr--){
            ans+=ch;
          }
        }
        return ans ;
    }
};