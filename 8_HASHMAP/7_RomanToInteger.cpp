//13
/*

Logic
- Pehle HashMap se har task ki frequency count karo.
- Max Heap me frequencies store karo.
- Heap ka top = sabse zyada remaining task.
- Har time unit:
  - Heap se ek task nikalo.
  - Frequency 1 kam karo.
  - Agar abhi bhi bacha hai, to usko queue me daal do with:
    - Remaining frequency
    - Time jab ye wapas execute ho sakta hai.
- Har time check karo:
  - Agar queue ka front cooldown complete kar chuka hai,
    to us task ko heap me wapas push kar do.
- Jab heap aur queue dono empty ho jaye, answer mil gaya.

*/


class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char,int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            if(i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]]){

                ans -= mp[s[i]];
            }
            else{

                ans += mp[s[i]];
            }
        }

        return ans;
    }
};