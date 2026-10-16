class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int m=matrix.size();//size of  row
        int n=matrix[0].size(); //size of col.
        int high= m*n-1;

        while(low<=high)
        {
            int guess=(low+high)/2;
            int row=guess/n;//row ko nikale
            int col=guess%n; //col ko nikale 
            if(matrix[row][col]==target)// matrix ka wo row aur col k value ko check kiye 
            {
                return true;
            }
            else if(matrix[row][col]<target)
            {
                low=guess+1;
            }
            else
            {
                high=guess-1;
            }
        }
        return false;
    }
};