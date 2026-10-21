//2404

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=-1;
        int maxfreq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
            {
                 mp[nums[i]]++;
            } 
        }
        for(auto i:mp){
            if(i.second>maxfreq ){
                maxfreq=i.second;
                ans=i.first;
               

            }
            else if(i.second == maxfreq && (ans==-1 || i.first<ans))//jab freq equal ho aur ya to ans=-1 ho ya element ans wale element se chota ho kyu ki equal frequncy hone pe sbse chota elm return krna hai
            {
                ans=i.first;
            }

        }
        return ans;

        
        
    }
};