class Solution {
public:
    bool isOperator(string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for(int i = 0; i < n; ++i) {
            if(isOperator(tokens[i])) { //if tokens[i] is an operand
                int y = st.top(); st.pop();
                int x = st.top(); st.pop();
                if(tokens[i] == "+") st.push(x + y);
                if(tokens[i] == "-") st.push(x - y);
                if(tokens[i] == "*") st.push(x * y);
                if(tokens[i] == "/") st.push(x / y);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
