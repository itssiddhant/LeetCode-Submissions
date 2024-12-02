class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string a="";
        int space=1;
        for(int i=0; i<sentence.size(); i++){
            if(isalpha(sentence[i])) a+=sentence[i];
            else{
                a="";
                space++;
            } 
            if(a.substr(0,searchWord.size())==searchWord) return space;
        }
        return -1;
    }
};