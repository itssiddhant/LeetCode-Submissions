class Solution {
public:
    string removeStars(string s) {
        int count = 0;
        for(int i=0; i<s.size();++i){
            if(s[i]=='*'){
                count--;
            }
            else{
                s[count++]=s[i];
            }
        }
        return s.substr(0,count);
    }
};