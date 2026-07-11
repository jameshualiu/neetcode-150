class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> ans;
        for(int i : nums)
            ans.insert(i);
        return nums.size() != ans.size();
    }
};
