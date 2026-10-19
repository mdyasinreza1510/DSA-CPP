class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq; //ek  min heap banaya
        for(int i=0;i<k;i++) //0 se k elem ko add kiya jisme lowest el sbse  top me hoga hemasha
        {
            pq.push(nums[i]);
        }
        for(int i =k;i<nums.size();i++){// ab kth el k baad se loop lagaye ge 
            if(nums[i]<=pq.top())//agar exmple 2nd el next el se chota hua to continue krenge kuki 2nd largest dhondre hai 
            {
                continue;
            }//jaise hi top k el se bada el milega usko pop krke bada el add krdenge heap wapas se arrang hoke small el  ko top  me krdega 
            pq.pop();
            pq.push(nums[i]);
        }
        return pq.top();//top me us size ka jo bhi el. hoa wo kth largest hoga  eg:- 2nd largest, 3rd largest
    }
};