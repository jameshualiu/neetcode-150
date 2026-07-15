class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for(int i = 0; i < operations.size(); ++i) {
            string s = operations[i];
            if(s == "D") {
                scores.push_back(scores[scores.size() - 1] * 2);
            } else if(s == "C") {
                scores.pop_back();
            } else if(s == "+") {
                scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
            } else {
                scores.push_back(stoi(operations[i]));
            }
            for(int i : scores)
                cout << i << " ";
            cout << "\n";
        }
        int ans = 0;
        for(int i : scores)
            ans += i;
        return ans;
    }
};