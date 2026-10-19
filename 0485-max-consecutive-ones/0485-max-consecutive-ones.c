int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int c=0;
    int s=0;
    for(int i =0;i<numsSize;i++){
        if(nums[i]==1){
            c++;
            if(c>s){
            s=c;
            }
        }
        else{
            
            c=0;
        }
    }
    return s;
    
}