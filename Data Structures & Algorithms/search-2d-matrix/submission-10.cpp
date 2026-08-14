class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        long long l1 = 0, r1 = matrix.size() - 1;
        long long row;
        long long l2 = 0, r2 = matrix[0].size() - 1;
        while(l1 < r1) {
            int mid = l1 + (r1 - l1 + 1) / 2;
            if(matrix[mid][0] <= target) {
                l1 = mid;
            } else {
                r1 = mid - 1;
            }
        }
        row = l1;
        while(l2 <= r2) {
            long long mid = l2 + (r2 - l2) / 2;
            if(matrix[row][mid] == target) {
                return true;
            } else if(matrix[row][mid] < target) {
                l2 = mid + 1;
            } else {
                r2 = mid - 1;
            } 
        }
        return false;
    }
};
