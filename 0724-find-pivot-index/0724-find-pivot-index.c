int pivotIndex(int* nums, int numsSize) {
    int sumtotal=0;
    int suml=0;
    for(int i=0;i<numsSize;i++){
        sumtotal+=nums[i];
    }
    int pi=0;
    for(int i=0;i<numsSize;i++){
        int rightsum = sumtotal-suml-nums[i];
        if(rightsum==suml){
            return i;
        }
        suml+=nums[i];
        
    }
   
    
    
   
    return -1;
    
}