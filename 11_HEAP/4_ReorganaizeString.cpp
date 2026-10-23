class Solution {
public:
/*
Logic
- Sabse pehle HashMap se har character ki frequency count karo.

- Max Heap banao jisme (frequency, character) store hoga.

- Heap ka top hamesha highest frequency wala character dega.

- Har baar heap se sabse frequent character nikalo aur answer me add karo.

- Us character ki frequency 1 kam kar do.

- Us character ko turant dobara heap me mat daalo, warna wahi character consecutive aa jayega.

- Previous character aur uski remaining frequency alag se store rakho.

- Agli iteration me pehle previous character ko heap me wapas push karo (agar uski frequency abhi bhi bachi ho).

- Ye process tab tak chalta rahega jab tak heap empty na ho.

- Agar end me answer ki length original string ke barabar nahi bani, to arrangement possible nahi tha.

*/
    string reorganizeString(string s) {

        unordered_map<char,int> mp;

        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;

        // Push all characters into heap
        for(auto i : mp){
            pq.push({i.second, i.first});
        }

        string ans = "";

        // Previous character and its remaining frequency
        pair<int,char> prev = {0,'#'};

        while(!pq.empty()){

            // Take character with highest frequency
            pair<int,char> curr = pq.top();
            pq.pop();

            // Add character to answer
            ans += curr.second;

            // One occurrence used
            curr.first--;

            // Push previous character back if it still has frequency left
            if(prev.first > 0){
                pq.push(prev);
            }

            // Current becomes previous
            prev = curr;
        }

        // If all characters couldn't be placed
        if(ans.size() != s.size()){
            return "";
        }

        return ans;
    }
};