class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";

        for(int i =s.length(); i>=0; i--){
            if (s[i] == '\0') {
                continue;
            }
            if(s[i]==' '){
                if(!temp.empty()){
                    reverse(temp.begin(),temp.end());
                    ans+=temp +" ";
                    temp.clear();
                }
            }
            else{
                temp.push_back(s[i]);
            }
        }
        if(!temp.empty()){
            reverse(temp.begin(),temp.end());
            ans = ans +temp;
        }
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};