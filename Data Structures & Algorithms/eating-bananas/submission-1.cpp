class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int l = 1, r = piles.back(), ans = piles.back();
        while(l < r) {
            int rate = l + (r - l) / 2, tot = 0;
            for(int b : piles) {
                if(b <= rate) 
                    tot++;
                else if(b > rate) 
                    tot += (b + rate - 1) / rate;
            }
            if(tot <= h) { // if # of hours is less than h, we can try and get a smaller k
                r = rate;
                ans = min(ans, rate);
            } else if(tot > h) { // otherwise if # of hours is >= h, we have to get a bigger k to get tot < h
                l = rate + 1;
            }
        }
        return ans;
    }
};
