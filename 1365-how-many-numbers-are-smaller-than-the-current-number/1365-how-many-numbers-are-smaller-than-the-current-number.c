/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int count(int* nums,int numsSize,int n){
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<n){
            c++;
        }
    }
    return c;

 }
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *arr=malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        arr[i]=count(nums,numsSize,nums[i]);
    }
    *returnSize=numsSize;
    return arr;
    
}