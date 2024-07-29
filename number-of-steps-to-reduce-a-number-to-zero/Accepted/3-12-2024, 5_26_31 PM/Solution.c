// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

int numberOfSteps(int num) {
    int count;
    for(count=0; num>0;count++){
        if(num%2==0){
            num=num/2;
        }
        else{
            num=num-1;
        }
    }
    return count;
}