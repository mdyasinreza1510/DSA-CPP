//771
/*
Logic
- Hume baar-baar check karna hai ki koi character jewel hai ya nahi.
- HashSet use karenge kyunki sirf character ka exist hona check karna hai.
- HashSet me search O(1) me ho jati hai.
- Pehle jewels ke saare characters set me daal do.
- Ab stones ko ek-ek karke traverse karo.
- Har character ke liye check karo ki wo set me present hai ya nahi.
- Agar present hai to answer increase kar do.
- Traverse complete hone ke baad answer return kar do.
*/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>st;
        for(char ch:jewels){
            st.insert(ch);
        }
        int ans=0;
        for( char ch:stones)
        {
            if(st.find(ch) !=st.end())
            {
                ans++;
            }
        }
        return ans;

        
    }
};

