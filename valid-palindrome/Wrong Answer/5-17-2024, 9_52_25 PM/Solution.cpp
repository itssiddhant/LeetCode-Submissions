// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool valid (char ch){
        if ((ch>='a'&& ch<='z')||(ch>='A' &&ch<='Z')||(ch>='0'&&ch<='9')){
            return 1;
        }
        return 0;
    }
    char tolcase(char ch){
         if ((ch>='a'&& ch<='z')|| (ch>='0'&&ch<='9')){
            return ch;
         }
         else{
            char temp = ch - 'A'+ 'a';
            return temp;
         }
    }
    bool checkPalindrome(string a){
        int s=0;
        int e= a.size()-1;
        while(s<=e){
            if ((a[s])!=a[e]) return 0;
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0; i<s.size();i++){
            if (valid(s[i])) temp.push_back(s[i]);
        
        }
        for(int i=0; i<s.size();i++){
            if (valid(s[i])) {
               temp[i]=tolcase(temp[i]);
            }
        }
        return checkPalindrome(temp);
    }
};