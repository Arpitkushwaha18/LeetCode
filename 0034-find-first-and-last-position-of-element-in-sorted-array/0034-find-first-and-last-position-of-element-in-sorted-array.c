/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int first(int* arr,int n,int target){

    int low =0;
   int  high =n-1;
    
    int ans=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans = mid;
            high = mid-1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;

 }
 int last(int* arr,int n,int target){
    int low =0;
   int  high =n-1;
    
    int ans=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans = mid;
            low = mid+1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
       
    }
     return ans;
    
 }
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

   int* result = malloc(2 * sizeof(int));

    result[0] = first(nums, numsSize, target);
    result[1] = last(nums, numsSize, target);

    *returnSize = 2;

    return result;
    
}