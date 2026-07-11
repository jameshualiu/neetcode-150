class Solution {
public:
    bool isPalindrome(string s) {
        string o = s;
        std::erase_if(o, [](unsigned char c) { 
            return !std::isalnum(c); 
        });
        std::transform(o.begin(), o.end(), o.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
        string p = o;
        std::reverse(p.begin(), p.end());
        return p == o;
    }
};
