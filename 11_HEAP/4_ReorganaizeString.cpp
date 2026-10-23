class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char,int> mp;

        // Count frequency
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }

        // Max Heap -> {frequency, character}
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