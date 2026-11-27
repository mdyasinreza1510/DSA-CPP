//1475
/*
Logic
- Har item ke liye right side ka pehla Smaller/Equal element chahiye, isliye Monotonic Stack use karenge.
- prices ko right se left traverse karenge.
- Stack me sirf aise elements rakhenge jo future me discount ban sakte hain.
- Agar stack ka top current price se bada hai, to usse pop kar do, kyunki wo current ka discount nahi ban sakta.
- Pop karne ke baad agar stack empty ho gaya, matlab koi discount nahi milega.
- Agar stack empty nahi hai, to stack ka top hi current item ka discount hoga.
- Current price me se discount subtract karke answer update kar do.
- Fir current price ko stack me push kar do taki left wale elements ke liye ye future discount ban sake.
*/
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        stack<int> st;

        for (int i = prices.size() - 1; i >= 0; i--) {

            int curr = prices[i];

            while (!st.empty() && st.top() > curr) {
                st.pop();
            }

            if (!st.empty()) {
                prices[i] = curr - st.top();
            }

            st.push(curr);   
        }

        return prices;
    }
};
