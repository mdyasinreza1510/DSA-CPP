
// lc 409
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;//map me elemnts add kiye 
        }
        int res = 0;
        bool odd = false; //odd check krne keliye ki map me koi odd times el. hai ya nahi
        for (auto i : mp) {
            int val = i.second;
            if (val % 2 == 0) {//logic yee hai ki agar koi bhi el odd number me hai to usse 1st and last position pr rkh k palindrome
                                //banayajaskta hai  lekin odd keliye 
             res+= val;
            } else {
                odd = true;
            }
        }
        if (odd == false) {// hm odd mese  -1 krke usko even bana denge 
            return res;
        }
        for (auto i : mp) {
            int val = i.second;
            if (val % 2 == 1) {
                res += val - 1;//yaha pe -1 krke even bana k palidrome me add krdenge aur jo ek elm bchega usko mid me addkrne se wo complete palidrome bnjayega
            }
        }
        return res+1;//jisko remove kiye the  usko add krdiye hahahaha
    }
};