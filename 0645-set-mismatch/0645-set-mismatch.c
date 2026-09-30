/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(2*sizeof(int));
    int *freq= calloc(numsSize+1,sizeof(int));

    for(int i =0;i<numsSize;i++){
        freq[nums[i]]++;

    }
    for (int i =1;i<=numsSize;i++){
        if(freq[i]==2){
            result[0]=i;
            
        }
        else if(freq[i]==0){
            result[1]=i;
        }
        
    }

    *returnSize=2;
    return result;
    
}