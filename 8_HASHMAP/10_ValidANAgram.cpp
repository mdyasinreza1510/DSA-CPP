//242

/*

Logic
- Agar dono strings ki length different hai → false.
- Ek HashMap banao.
- s ke har character ki frequency increase karo.
- t ke har character ki frequency decrease karo.
- Agar end me kisi bhi character ki frequency 0 nahi hai → false.
- Warna → true.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> mp;

        // Count characters of s
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }

        // Remove characters of t
        for(int i = 0; i < t.size(); i++){
            mp[t[i]]--;
        }

        // Check frequencies
        for(auto it : mp){

            if(it.second != 0){
                return false;
            }
        }

        return true;
    }
};