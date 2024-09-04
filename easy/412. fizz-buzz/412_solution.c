char** fizzBuzz(int n, int* returnSize) {
    char** returnArray=(char**)malloc(n*sizeof(char*));
    for (int i=1;i<=n;i++){
        if (i%3==0 && i%5==0){
            returnArray[i-1]="FizzBuzz";
        }
        else if(i%3==0){
            returnArray[i-1]="Fizz";
        }
        else if(i%5==0){
            returnArray[i-1]="Buzz";
        }
        else{
            char str[5];
            sprintf(str, "%d", i);
            returnArray[i - 1] = strdup(str);
        }
    }
    *returnSize=n;
    return returnArray;
}