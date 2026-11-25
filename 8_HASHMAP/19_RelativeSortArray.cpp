//1122
/*
Logic
- Hume arr2 ka order maintain karna hai, isliye pehle arr1 ki frequency count karenge.
- HashMap use karenge kyunki kisi bhi number ki frequency O(1) me mil jayegi.
- arr1 traverse karke har number ki frequency store kar do.
- Ab arr2 traverse karo.
- Har element ko uski frequency jitni baar answer me daal do.
- Uske baad us element ki frequency 0 kar do taki dobara add na ho.
- Ab HashMap me jo elements bach gaye hain, unhe answer me add karna hai.
- Kyunki remaining elements ascending order me chahiye, isliye 0 se 1000 tak traverse karenge (problem constraint) aur jis number ki frequency hogi usse add kar denge.
- Final answer return kar do.
*/
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int, int> mp;

        for (int num : arr1) {
            mp[num]++;
        }
        vector<int> ans;
        for (int num : arr2) {

            while (mp[num] > 0) {

                ans.push_back(num);

                mp[num]--;
            }
        }
        for (int i = 0; i <= 1000; i++) {

            while (mp[i] > 0) {

                ans.push_back(i);

                mp[i]--;
            }
        }

        return ans;
    }
};