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