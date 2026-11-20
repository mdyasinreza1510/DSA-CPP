//575. Distribute Candies hashset..

/*
Logic
- Alice can eat only n/2 candies.
- We want to maximize different types, so first count how many unique candy types exist.
- Why HashSet?
  - We only care whether a type has appeared or not.
  - Duplicate candies don't increase the answer.
- Insert every candy type into the HashSet.
- Let:
  - unique = number of unique candy types
  - limit = n/2 (maximum candies Alice can eat)
- If unique <= limit, Alice can eat one candy from every type.
- If unique > limit, she cannot eat all types because she can only eat n/2 candies.
*/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int limit=n/2;
        int ans;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(candyType[i]);
        }
        int unique=st.size();
        ans=min(unique,limit);
        return ans;
        
    }
};