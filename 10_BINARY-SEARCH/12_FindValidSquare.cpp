class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1;//sqaur number 1 se num k beech me hi hoga eg:- 16 is sqr of 4 so 1--16(4 exist in 1--16)
        int high=num;
        while(low<=high){
            long long guess=low+(high-low)/2;//koi ek number guess kiye 
            long long sqr=guess*guess;// uska  square nikale 
            if(sqr==num) // agar sqr equal hua to  mtlb wo number hi num ka sqaured number hai 
            {
                return true;
            }
            if(sqr<num)  // agar less hua mtlb age ka number sqr hoga 
            {
                low=guess+1;
            }else// bda hua mtlb oeche ka number sqaure hoga 
            {
                high=guess-1;
            }
        }
        return false;
    }
};