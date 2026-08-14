class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l1 = 0, r1 = matrix.size() - 1;
        int row;
        while(l1 <= r1) {
            int mid = (l1 + r1) / 2;
            if(matrix[mid][0] < target) {
                l1 = mid + 1;
            } else if(matrix[mid][0] > target) {
                r1 = mid - 1;
            } else {
                break;
            }
        }
        row = (l1 + r1) / 2;

        int l2 = 0, r2 = matrix[0].size() - 1;
        while(l2 <= r2) {
            int mid = (l2 + r2) / 2;
            if(matrix[row][mid] < target) {
                l2 = mid + 1;
            } else if(matrix[row][mid] > target) {
                r2 = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
