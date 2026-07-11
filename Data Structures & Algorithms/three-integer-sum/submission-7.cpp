class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        for(int i = 0; i < (int)nums.size(); ++i) {
            for(int j = i + 1; j < (int)nums.size(); ++j) {
                for(int k = j + 1; k < (int)nums.size(); ++k) {
                    if((long long)nums[i] + nums[j] + nums[k] == 0) {
                        s.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for(auto t : s) {
            ans.push_back(t);
        }
        return ans;
    }
};