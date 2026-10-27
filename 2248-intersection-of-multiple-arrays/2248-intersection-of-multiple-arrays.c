/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int** nums, int numsSize, int* numsColSize, int* returnSize) {

    int hash[1001]={0};
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsColSize[i];j++){
            hash[nums[i][j]]++;
        }
    }
    int x=numsColSize[0];
    int *arr=malloc((x+1)*sizeof(int));
    int k=0;
    for(int i=0;i<1001;i++){
        if(hash[i]==numsSize){
            arr[k++]=i;
        }
    }
    *returnSize=k;
    return arr;
    
}