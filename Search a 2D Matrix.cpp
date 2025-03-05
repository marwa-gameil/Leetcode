class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         if (matrix.empty() || matrix[0].empty())
          return false;
        int low = 0;
        int m = matrix.size();
        int n =matrix[0].size();
        int high = m*n -1;
        while ( low <= high){
            int mid = low + (high - low ) /2;
            if(target == matrix[mid/n][mid%n])
            return true;
            if(target >= matrix[mid/n][mid%n])
            low = mid +1;
            else
            high = mid -1;


        }
        return false;

    }
};