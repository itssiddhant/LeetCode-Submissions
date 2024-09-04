class Solution {
private:
    bool matches(char a, char b){
        if (a=='{' && b=='}') return true;
        else if (a=='[' && b==']') return true;
        else if (a=='(' && b==')') return true;
        else return false;
    }
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i =0; i<s.length();i++){
            char ch = s[i];
            if(ch == '{' || ch== '[' || ch=='('){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    if(matches(st.top(),ch)){
                        st.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};