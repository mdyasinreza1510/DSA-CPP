//205

/*
Logic 
- Sabse pehle check karo agar s aur t ki length alag hai, to mapping possible hi nahi hai, isliye false return kar do.
- Do HashMap banao:
  - mp1 → s ke character ko t ke character se map karega.
  - mp2 → t ke character ko s ke character se map karega.
- String ko left se right ek-ek character karke traverse karo.
- Agar current character s[i] pehle se mp1 me hai, to check karo ki woh isi t[i] se map ho raha hai ya nahi. Agar nahi, to mapping change ho rahi hai, isliye false.
- Agar s[i] pehle map nahi hua, to uski mapping mp1[s[i]] = t[i] store kar do.
- Ab reverse direction bhi check karo. Agar t[i] pehle se mp2 me hai, to verify karo ki woh isi s[i] se map ho raha hai ya nahi. Agar nahi, to do alag characters ek hi character par map ho rahe hain, isliye false.
- Agar t[i] pehle map nahi hua, to mp2[t[i]] = s[i] store kar do.
- Agar poori string traverse ho gayi aur kahin bhi mismatch nahi mila, to har character ki one-to-one mapping valid hai, isliye true return kar do.
*/