//lc 383
class Solution {
public:
     bool fun(unordered_map<char,int>need,unordered_map<char,int>have){
            for(auto i:need){
                char c=i.first;
                int fneed=i.second;
                int fhave=have[c];
                /*yaha fhave=have[c] ka mtlb hai ki intially c me i ki first valu hai suppoce 'a : 5' tob ab fhave me hace['a'] save hoga ab have[a] ki jo bhi frequency hogi wo fhave me save hojayegi */
                if(fhave<fneed){
                    return false;
                }
            }
            return true;

        }
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        for(int i=0;i<ransomNote.size();i++){
            need[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            have[magazine[i]]++;
        }
      return fun(need,have); 
        
    }
};