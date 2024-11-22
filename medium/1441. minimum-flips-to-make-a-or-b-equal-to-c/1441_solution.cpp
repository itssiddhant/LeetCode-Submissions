class Solution {
public:
    int minFlips(int a, int b, int c) {
        long ans =0;
        while(a||b||c){
            long x1= a&1;
            long x2= b&1;
            long x3= c&1;
            if((x1|x2)!=x3){
                if(x1&x2)ans+=2;
                else ans+=1;
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return ans;
    }
};