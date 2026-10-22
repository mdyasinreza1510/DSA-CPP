//506

/*

1- sbse pehle ek max heap banaye jisme scores ko add krliye heap me autmatic max score top me rhega

2- ek string vector banaye jisme ans store krenge ,aur rank=1 assign kiye top scorers keliye 

3-ek loop lagayenge jab tk heap empty nahojaye 
> index me top element ka index assign krenge 
>aur top elemenet ko pop krdenge kyu ki 1st el sbse bada hoga isiliye gold mejayega to pop k baad dekhenge ki agar rank ==1 hai to uss elemnt res array me add krenge uske index ka sath eg:-<10,0> ye jayga res array k 0th index me 
> uske baad rank++ krdenge 
> 2nd , 3rd rank keliye rank assign krdenge 
> 4th rank se jo bhi element ayega usko uske index pe add krke rank ki val ko string banake store krdenge 

4- res return krdenge 


*/
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < score.size(); i++) {
            pq.push({score[i],i});
        }
        vector<string> ans(score.size());

        int rank = 1;
        while (!pq.empty()) {
            int index = pq.top().second;
            pq.pop();
            if(rank==1)
            {
                ans[index]="Gold Medal";
            }
            else if(rank==2)
            {
                ans[index]="Silver Medal";
            }
            else if(rank==3)
            {
                ans[index]="Bronze Medal";
            }
            else
            {
                ans[index]=to_string(rank);
            }
            rank++;
        }
        return ans;
    }
};