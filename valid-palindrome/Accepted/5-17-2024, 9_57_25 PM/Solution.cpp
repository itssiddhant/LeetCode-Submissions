// https://leetcode.com/problems/valid-palindrome

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