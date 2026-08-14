class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0, ans = 0;
        for(int r = 0; r < s.size(); ++r) {
            if(mp.find(s[r]) != mp.end()) //if we find a dupe, move the left pointer to the next occurence of the character to remove the dupe.
                l = max(mp[s[r]] + 1, l);
            mp[s[r]] = r;
            ans = max(r - l + 1, ans);
        }
        return ans;
    }
};

