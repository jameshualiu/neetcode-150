class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(int i = 0; i < strs.size(); ++i) {
            string sort_i = strs[i];
            sort(sort_i.begin(), sort_i.end());
            map[sort_i].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto & pair : map)
            ans.push_back(pair.second);
        return ans;
    }
};
