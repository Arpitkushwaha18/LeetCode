int findGCD(int* nums, int numsSize) {
    int max=nums[0];
    int min=nums[0];
    for(int i=1;i<numsSize;i++){
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min =nums[i];
        }
    }
    while(min!=0){
        int c=min;
        min=max%min;
        max =c;
    }
    return max;
    
}