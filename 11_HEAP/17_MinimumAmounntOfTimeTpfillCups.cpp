//2335

/*
Logic
- Har second hume sabse zyada remaining wale 2 cup types choose karne chahiye.
- Isliye Max Heap use karenge.
- Saare non-zero amounts heap me push karo.
- Jab tak heap me 2 ya usse zyada elements hain:
  - Do largest values pop karo.
  - Dono ko 1-1 decrease karo.
  - Agar value 0 se badi ho to wapas heap me push karo.
  - Time ko 1 increase karo.
- Agar end me ek element bach jaye, uski value ko answer me add kar do.
- Final answer return karo.
*/