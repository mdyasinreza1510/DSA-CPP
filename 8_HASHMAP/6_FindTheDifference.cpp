//lc 389

// Logic
// - Ek HashMap banao jo har character ki frequency store kare.
// - Pehle s ke saare characters ki frequency increase karo.
// - Fir t ke characters ko ek-ek karke dekho.
// - Agar current character ki frequency 0 hai, wahi extra character hai.
// - Warna us character ki frequency decrease kar do.
// - Loop ke end tak extra character mil jayega.

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;//hashmap me freqency  add krli
        }
        for(int i=0 ; i < t.size() ; i++)
        {
            if(mp[t[i]]==0)//ab t me un char ki frequency check ki agar 0 hui mtlb naya character whi hai to usko return krdo
            {
                return t[i];
            }
            mp[t[i]]--;//nahi to uske freq.ko kam krdo.
        }
        return ' ';

        
    }
};