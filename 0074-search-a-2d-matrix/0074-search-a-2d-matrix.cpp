class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)return 0;
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0,high=m*n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid/m][mid%m]==target)return true;
            else if(matrix[mid/m][mid%m]>target)high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};

