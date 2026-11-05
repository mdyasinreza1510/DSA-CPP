/*
Logic
- Number ko string me convert karo.
- Do Max Heaps banao.
  - Ek odd digits ke liye.
  - Ek even digits ke liye.
- String traverse karo.
- Agar digit even hai to even heap me push karo.
- Agar digit odd hai to odd heap me push karo.
- Ab string ko dobara traverse karo.
- Agar current position par even digit hai to even heap ka largest digit us position par rakh do.
- Agar current position par odd digit hai to odd heap ka largest digit us position par rakh do.
- Har baar heap se top pop kar do.
- End me string ko integer me convert karke return kar do.

*/

class Solution {
public:
    int largestInteger(int num) {
       string s=to_string(num);
        priority_queue<int>odd;
        priority_queue<int>even;

        for(int i=0;i<s.size();i++){
            int digit=s[i]-'0';//eg:-S=5 ,0=48// ASCII value s[5]= 53; S - '0'  // 53 - 48 = 5
            if(digit % 2 == 0)
            {
                even.push(digit);
            }
            else
            {
                odd.push(digit);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            int currdig=s[i]-'0';
            if(currdig % 2 == 0)
            {
                s[i]=even.top()+'0';//eg: top=5 ->5+48 =53
                even.pop();
            }
            else{
                s[i]=odd.top()+'0';
                odd.pop();
            }
        }
        return stoi(s);

        
    }
};