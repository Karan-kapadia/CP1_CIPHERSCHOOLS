class Solution {
public:
    bool isOpen(char c){
        return (c == '(' || c == '{' || c == '[');
    }
    bool isMatching(char close, char open){
        if((open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']'))
            return true;
        else
            return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(isOpen(s[i])){
                st.push(s[i]);
            }
            else{
                if(st.empty())
                    return false;
                char closing = st.top();
                if(!isMatching(closing, s[i])){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
