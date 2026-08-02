class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k = 1, ans = 0;
        while(k < prices.size()) {
            int max_prof = 0;
            max_prof = prices[k] - prices[0];
            int window = max_prof;
            for (int i = k; i < prices.size(); i++) {
                window = prices[i] - prices[i - k];
                max_prof = max(max_prof, window);
            }
            ans = max(max_prof, ans);
            k++;
        }
        return ans;
    }
};
