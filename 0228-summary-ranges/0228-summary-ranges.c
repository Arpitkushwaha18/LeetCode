/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    char **arr = malloc(numsSize*sizeof(char*));
    *returnSize = 0;

    if (numsSize == 0)
        return arr;
    
    int a=nums[0];
    int c=nums[0];
    int count =1;
    int k=0;
    for(int i =1;i<numsSize;i++){
        if((long long )nums[i]==(long long )c+1){
            c++;
            count++;
        }
        else{
            arr[k] =malloc(25*sizeof(char));
            
            
            if(count>1){
            snprintf(arr[k],25,"%d->%d",a,c);
            }
            else{
                snprintf(arr[k],25,"%d",a);

            }
        
            k++;
             a = nums[i];
            c = nums[i];
            count = 1;
        }
        

    }
    arr[k] = malloc(25 * sizeof(char));

    if (count > 1) {
        snprintf(arr[k], 25, "%d->%d", a, c);
    }
    else {
        snprintf(arr[k], 25, "%d", a);
    }

    k++;

    *returnSize=k;
    return arr;
    
}