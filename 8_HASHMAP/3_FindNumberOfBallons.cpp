// lc 1189

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        unordered_map<char,int>have;
        for(int i=0;i<n;i++){//sbse pehle loop chla k jo bhi frequecy mili  h string se usko  add krliye 
            have[text[i]]++;
        }
        unordered_map<char,int>need; // ek map banaye jisme values assign krdiye jo hme chaiye 
        need['b']=1;
        need['a']=1;
        need['l']=2;
        need['o']=2;
        need['n']=1;

        int res=INT_MAX;
        for(auto i: need){ /* ab need me loop chla k dekhnge aur character aur need ki frq. nikal lenge aur */
            char c=i.first;
            int fneed=i.second;
            int fhave=have[c];//have me uss char ki kya freq hai usko bhi nikal  lenge fhave 
            int times=fhave/fneed;//have aur need ko divide krke required no of chars nikal lenge 
            res=min(res,times);// sb char ko check krenge ki kon sbse minimum hai wahi ans hoga 
        }
        return res;
        
    }