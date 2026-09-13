int maximumDifference(int* nums, int numsSize) {
    int max =-1;
    for(int i =0;i<numsSize;i++){
    for(int j =i+1;j<numsSize;j++){
        if(nums[i]<nums[j]){
            int m = nums[j]-nums[i];
            if(m>max){
                max =m;
            }
        }
    }
    }
    return max;
    
}