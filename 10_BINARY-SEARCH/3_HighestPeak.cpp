//852
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        while (low < high) {
            int mid = (low + high) / 2;
            if (arr[mid] < arr[mid + 1]) { // means were in increasing part ans
                                           // could be more
                low = mid + 1;
            } else{//arr[mid]>arr[mid+1] , means were in decreasing part the ans could be the mid so we dont remove the mid

            high=mid;
             
            }
        
        }
        return low;
    }
};