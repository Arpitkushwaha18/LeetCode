int missingNumber(int* nums, int numsSize) {
    int *freq=calloc(numsSize+1,sizeof(int));
    int result=numsSize;
    
    for(int i =0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    for(int i =0;i<numsSize;i++){
        if(freq[i]==0){
            result = i;
            break;
            
        }
    }
    return result;
    
    
}