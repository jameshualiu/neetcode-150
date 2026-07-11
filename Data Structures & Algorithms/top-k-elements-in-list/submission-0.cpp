class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i : nums)
            map[i]++;
        vector<pair<int, int>> arr;
        for(auto& a : map)
            arr.push_back({a.second, a.first});
        sort(arr.rbegin(), arr.rend());

        vector<int> ans;
        for(int i = 0; i < k; ++i)
            ans.push_back(arr[i].second);
        return ans;
    }
};
