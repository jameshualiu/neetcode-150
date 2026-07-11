class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(int i = 0; i < strs.size(); ++i) {
            ans += strs[i] + "#,";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i = 0, j = 0; i < s.length(); ++i) {
            if(s[i] == '#' && s[i + 1] == ',') {
                ans.push_back(s.substr(j, i-j));
                j = i + 2;
            }
        }
        return ans;
    }
};
