class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        std::set<int> s(nums.begin(), nums.end());
        int ans = 1, cur = 1;
        int prev = *s.begin();
        for(auto it = std::next(s.begin()); it != s.end(); ++it) {
            int x = *it;
            if(x == prev + 1)
                cur++;
            else {
                ans = std::max(ans, cur);
                cur = 1;
            }
            prev = x;
        }
        return std::max(ans, cur);
    }
};