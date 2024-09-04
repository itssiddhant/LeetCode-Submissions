class Solution {
public:
    bool valid (char ch){
        return isalnum(ch);
    }
    char tolcase(char ch){
         if ((ch>='a'&& ch<='z')|| (ch>='0'&&ch<='9')){
            return ch;
         }
         else{
            return tolower(ch);
        }
    }
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0; i<s.size();i++){
            if (valid(s[i])) temp.push_back(tolcase(s[i]));
        
        }
        int start=0;
        int end= temp.size()-1;
        while(start<=end){
            if ((temp[start])!=temp[end]) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};