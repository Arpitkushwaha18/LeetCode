/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *result = malloc(numsSize*sizeof(int));
    int *freq = calloc(numsSize + 1, sizeof(int));
    
    for(int i =0;i<numsSize;i++){
        freq[nums[i]]++;
        
    }
    int m =0;
    for(int i =1;i<=numsSize;i++){
        if(freq[i]==0){
            result[m]=i;
            m++;
        }
        
    }
    *returnSize =m;
    return result;
    
}