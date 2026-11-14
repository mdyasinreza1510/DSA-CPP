//1054

/*
Logic
- Pehle HashMap se har barcode ki frequency count karo.
- Max Heap me (frequency, value) store karo.
- Har baar heap se 2 most frequent elements nikalo.
- Dono ko answer me add karo.
- Dono ki frequency 1 kam karo.
- Agar frequency abhi bhi > 0 hai, to unhe heap me wapas push karo.
- End me agar ek element bach jaye, use answer me add kar do.
Why pop 2 elements?

Agar ek hi element repeatedly uthate rahoge to adjacent duplicates ban sakte hain.

Isliye har baar 2 different elements choose karte hain.

*/


class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {

        unordered_map<int,int>mp;
        for(int i=0;i<barcodes.size();i++){
            mp[barcodes[i]]++;// yha pe freq add kiye
        }
        priority_queue<pair<int,int>>pq;

        for(auto i:mp)
        {
            pq.push({i.second,i.first});// <freq,value>
        }
        vector<int>res;
        while(pq.size()>=2) //do el ko liye 
        {
            auto firstel=pq.top();//phla value
            pq.pop();
            auto secondel=pq.top();//dusra value
            pq.pop();

            res.push_back(firstel.second);// phla val ko ans me push kiya 
            res.push_back(secondel.second);// fir dusra ko

            firstel.first--;// then dono ke freq ko kamkiya 
            secondel.first--;

            if(firstel.first>0)//agra phla val ka freq abhi bhi >0 hai to us el ko waps heap me push krenge same for 2nd element
            {
                pq.push(firstel);
            }
             if(secondel.first>0)//<freq,value>
            {
                pq.push(secondel);
            }

        }
        if(!pq.empty()){
            res.push_back(pq.top().second);
        }
        return res;
    }
};