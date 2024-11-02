class Solution {
public:
    bool isCircularSentence(string sentence) {
        int sizeEnd = sentence.length()-1;
        for(int i=0; i<sizeEnd+1; ++i){
            if(sentence[i]==' ' && sentence[i-1]!=sentence[i+1]){
                return false;
            }
        }
        return sentence[0]==sentence[sizeEnd];
    }
};