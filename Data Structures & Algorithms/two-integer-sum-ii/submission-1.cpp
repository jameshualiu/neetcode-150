class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // ok my thought is since we can only use O(1) space, no additional variables are allowed right?
        // so we have two pointers where the first one finds the smallest number
        // and then the second one tries to find the target - that smallest number
        sort(numbers.begin(), numbers.end());
        vector<int> ans;
        for(int i = 0; i < numbers.size(); ++i) {
            int mn = numbers[i];
            for(int j = i; j < numbers.size(); ++j) {
                if(target - mn == numbers[j]) {
                    ans.push_back(i + 1);
                    ans.push_back(j + 1);
                    return ans;
                }
            }
        }
    }
};
