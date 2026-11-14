//1054

/*
Logic
- Pehle HashMap se har barcode ki frequency count karo.
- Max Heap me (frequency, value) store karo.
- Har baar heap se 2 most frequent elements nikalo.
- Dono ko answer me add karo.
- Dono ki frequency 1 kam karo.
- Agar frequency abhi bhi > 0 hai, to unhe heap me wapas push karo.
- End me agar ek element bach jaye, use answer me add kar do.
Why pop 2 elements?

Agar ek hi element repeatedly uthate rahoge to adjacent duplicates ban sakte hain.

Isliye har baar 2 different elements choose karte hain.

*/