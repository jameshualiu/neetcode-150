class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> m;
        vector<char> v;
        m[']'] = '[', m['}'] = '{', m[')'] = '(';
        for(char c : s) {
            if(c == '[' || c == '(' || c == '{') {
                v.push_back(c);
            } else {
                if (v.empty() || v.back() != m[c]) {
                    return false;
                }
                v.pop_back();
            }
        }
        return v.empty();
    }
};
