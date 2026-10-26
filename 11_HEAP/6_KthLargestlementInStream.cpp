class KthLargest {
public:
        priority_queue<int, vector<int>,greater<int>>pq;//min heap banaya
        int k; // k var. banaya
    KthLargest(int k, vector<int>& nums) {
        this->k=k;

        for(int x: nums)//loop laga k sare elem. ko heap me push kiye 
        {
            pq.push(x);
            if(pq.size()>k)//size k se bada hoga uper ka elm. remove krenge kth elment autmatic top me ajayega
            {
                pq.pop();
            }
        }
        
    }
    
    int add(int val) {
        pq.push(val);//heap me loop se el add hone k baad naye el add krenge
        if(pq.size()>k)
        {
            pq.pop();//same kaam as heap me kiye the for kth elm.
        }
        return pq.top();
    }

};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */