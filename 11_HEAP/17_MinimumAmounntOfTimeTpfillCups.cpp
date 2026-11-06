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
class Solution {
public:
    int fillCups(vector<int>& amount) {

        priority_queue<int> pq;

        for(int i = 0; i < amount.size(); i++){
            if(amount[i] > 0){
                pq.push(amount[i]);
            }
        }

        int time = 0;

        while(pq.size() >= 2){

            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            first--;
            second--;

            time++;

            if(first > 0){
                pq.push(first);
            }

            if(second > 0){
                pq.push(second);
            }
        }

        if(!pq.empty()){
            time += pq.top();
        }

        return time;
    }
};