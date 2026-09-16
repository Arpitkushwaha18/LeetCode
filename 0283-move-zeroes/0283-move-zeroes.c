void moveZeroes(int* nums, int numsSize) {

    int c=0;
    int f =numsSize;
    int reverse[numsSize];
    for (int i =0;i<numsSize;i++){
        if (nums[i]==0){
            reverse[f-1]=0;
            c++;
            f--;


        }
        else{
            reverse[i-c]=nums[i];
            
        }
    }
    for (int i=0;i<numsSize;i++){
        nums[i]=reverse[i];
    }
    
}