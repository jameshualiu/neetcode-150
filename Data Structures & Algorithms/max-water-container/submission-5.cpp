class Solution {
public:
    int maxArea(vector<int>& heights) {
        //looking for the biggest area between two bars
        //can brute force by checking each pair and calculating area
        //max amt of water a container can store is 1000 * 1000

        int ans = 0;
        for(int i = 0; i < heights.size(); ++i) {
            for(int j = i + 1; j < heights.size(); ++j) {
                ans = max(min(heights[i], heights[j]) * (j - i), ans);
            }
        }
        return ans;
    }
};
