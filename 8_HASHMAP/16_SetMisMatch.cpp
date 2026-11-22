//645
/*
Logic (Hinglish)
- Array me har number ko uski correct position (value-1) par hona chahiye.
- Isliye Cyclic Sort use karenge.
- Jab tak current number apni correct position par nahi hai aur us position par same number nahi pada hai, tab tak swap karte rahenge.
- Agar correct position par same number already hai, matlab duplicate mil gaya.
- Sorting ke baad array ko ek baar traverse karo.
- Jis index par nums[i] != i+1
  - nums[i] = duplicate
  - i+1 = missing
- Isi pair ko answer bana do.

*/
