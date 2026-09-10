/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize*sizeof(int));
    
    int right= 1;
    result[0]=1;
   
    
    
    for(int i =1;i<numsSize;i++){
        result [i]= result[i-1]*nums[i-1];
        
        }
        for(int i =numsSize-1;i>=0;i--){
            result[i]=result[i] * right;
            right *=nums[i];
        
    }

 *returnSize= numsSize;



    return result;








   

    
}