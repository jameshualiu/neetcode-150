class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp, perm;
        int l = 0, r = s1.size() - 1;
        for(char c : s1)
            perm[c]++;
        for(int i = 0; i < s1.size(); ++i)
            mp[s2[i]]++;
        while(r < s2.size()) {
            if(mp == perm)
                return true;
            mp[s2[l]]--;
            if(mp[s2[l]] == 0) mp.erase(s2[l]);
            l++, r++;
            if(r < s2.size())
                mp[s2[r]]++;
        }
        return false;
    }
};
