//496
/*
Logic
- Hume har element ka Next Greater Element (NGE) chahiye, isliye Monotonic Stack use karenge.
- nums2 ko right se left traverse karenge, kyunki right side ke answers pehle se ready honge.
- Stack me sirf current element se bade elements rakhenge.
- Agar stack ka top current element se chhota ya equal hai, to usse pop kar do, kyunki wo kabhi kisi ka next greater nahi ban sakta.
- Agar stack empty ho gaya, matlab current element ka koi greater element nahi hai, answer -1 hoga.
- Agar stack empty nahi hai, to stack ka top hi current element ka next greater hai.
- Is answer ko HashMap me store kar do (element -> next greater), taki baad me nums1 ke liye O(1) me answer mil jaye.
- Fir current element ko stack me push kar do aur next iteration continue karo.
*/