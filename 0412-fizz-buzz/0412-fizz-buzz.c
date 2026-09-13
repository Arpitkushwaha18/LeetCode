/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **result = malloc(n*sizeof(char*));
    for(int i =0;i<n;i++){
        
        if((i+1)%3==0&&(i+1)%5==0){
            result[i]="FizzBuzz";
        } 
        else if((i+1)%3==0){
            result[i]="Fizz";

        }
       else if((i+1)%5==0){
            result[i]="Buzz";
        }
        else{
            result[i] = malloc(12 * sizeof(char));
            sprintf(result[i], "%d", i + 1);
        }
    }
    *returnSize=n;
    return result;
}