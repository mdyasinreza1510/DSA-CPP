//697
// Logic
// - Hume har number ke liye 3 information store karni hai:
//   - Frequency
//   - First index
//   - Last index
// - HashMap use karenge kyunki kisi bhi number ki information O(1) me mil jayegi.
// - Array ko ek baar traverse karo.
// - Agar number pehli baar mila hai to uska first index store karo.
// - Har baar uski frequency increase karo aur last index update karte raho.
// - Traverse complete hone ke baad maximum frequency (degree) nikal lo.
// - Ab jin numbers ki frequency degree ke equal hai, unka length nikalo:

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        unordered_map<int, int> freq;
        unordered_map<int, int> first;
        unordered_map<int, int> last;

        // Store frequency, first index and last index
        for (int i = 0; i < nums.size(); i++) {

            // First occurrence
            if (first.find(nums[i]) == first.end()) {
                first[nums[i]] = i;
            }

            // Increase frequency
            freq[nums[i]]++;

            // Update last occurrence
            last[nums[i]] = i;
        }

        int degree = 0;

        // Find degree of array
        for (auto it : freq) {
            degree = max(degree, it.second);
        }

        int ans = nums.size();

        // Find minimum length
        for (auto it : freq) {

            int num = it.first;

            if (freq[num] == degree) {

                int length = last[num] - first[num] + 1;

                ans = min(ans, length);
            }
        }

        return ans;
    }
};