//4065
/*
Logic
- Hume har number ki frequency pata honi chahiye, isliye HashMap use karenge.
- Pehle nums traverse karke sabhi numbers ki frequency count kar lo.
- Har operation me smallest se largest number tak check karenge.
- Agar kisi number ki frequency 0 se zyada hai, to uska ek occurrence answer me add kar do.
- Saath hi uski frequency 1 kam kar do.
- Ek operation complete hone ke baad fir se wahi process repeat karo.
- Jab kisi bhi number ki frequency na bache, process stop kar do.
- Isi order me answer automatically problem ke according ban jayega.
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        map<int,int> mp;
        vector<int> ans;


        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        while(true)
        {
            bool found = false;

            for(auto &i : mp)
            {
                if(i.second > 0)
                {
                    ans.push_back(i.first);
                    i.second--;
                    found = true;
                }
            }

            if(found == false)
            {
                break;
            }
        }

        return ans;
    }
};