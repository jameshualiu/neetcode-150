class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1, ans = 0;
        while(left < heights.size() - 1 && right >= 0) {
            if(heights[left] > heights[right]) {
                ans = max(ans, heights[right] * (right - left));
                right--;
            } else {
                ans = max(ans, heights[left] * (right - left));
                left++;
            }
        }
        return ans;
    }
};
