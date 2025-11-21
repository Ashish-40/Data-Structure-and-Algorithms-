class Solution {
    int result(int b,int a,string &op){
        if(op=="+")return b + a;
        if(op=="-")return b - a;
        if(op=="*")return b * a;
        if(op=="/")return b / a;
        return 0;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        for (int i = 0; i < n; i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
                tokens[i] == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(result(b, a, tokens[i]));
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};