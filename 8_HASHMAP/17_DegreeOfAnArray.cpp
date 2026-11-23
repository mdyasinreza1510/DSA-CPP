//697
// Logic
// - Hume har number ke liye 3 information store karni hai:
//   - Frequency
//   - First index
//   - Last index
// - HashMap use karenge kyunki kisi bhi number ki information O(1) me mil jayegi.
// - Array ko ek baar traverse karo.
// - Agar number pehli baar mila hai to uska first index store karo.
// - Har baar uski frequency increase karo aur last index update karte raho.
// - Traverse complete hone ke baad maximum frequency (degree) nikal lo.
// - Ab jin numbers ki frequency degree ke equal hai, unka length nikalo: