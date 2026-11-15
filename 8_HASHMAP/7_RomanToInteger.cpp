//13
/*

Logic
- Pehle HashMap se har task ki frequency count karo.
- Max Heap me frequencies store karo.
- Heap ka top = sabse zyada remaining task.
- Har time unit:
  - Heap se ek task nikalo.
  - Frequency 1 kam karo.
  - Agar abhi bhi bacha hai, to usko queue me daal do with:
    - Remaining frequency
    - Time jab ye wapas execute ho sakta hai.
- Har time check karo:
  - Agar queue ka front cooldown complete kar chuka hai,
    to us task ko heap me wapas push kar do.
- Jab heap aur queue dono empty ho jaye, answer mil gaya.

*/