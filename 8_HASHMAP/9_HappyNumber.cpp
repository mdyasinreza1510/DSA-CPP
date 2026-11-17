//202

/*
Logic
- Ek unordered_set banao.
- Jab tak n != 1
  - Agar n pehle aa chuka hai
    - Cycle ban gayi.
    - Return false.
  - n ko set me store karo.
  - Digits ke squares ka sum calculate karo.
  - n = sum
- Agar n == 1
  - Return true.

*/
class Solution {
public:

    int getSum(int n){

        int sum = 0;

        while(n > 0){

            int digit = n % 10;

            sum += digit * digit;

            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {

        unordered_set<int> st;

        while(n != 1){

            // Cycle detected
            if(st.count(n)){
                return false;
            }

            st.insert(n);

            n = getSum(n);
        }

        return true;
    }
};