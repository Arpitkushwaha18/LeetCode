/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize=nums1Size;
    int *arr = malloc((nums1Size+1)*sizeof(int));
    int k=0;
    int x;
    int m;
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                x= j;
                m = nums2[j];
                break;
            }
        }
        int l=-1;
        for(int j=x;j<nums2Size;j++){
            
            if(m<nums2[j]){
                l=nums2[j];
                break;
            }
           
            
        }
         arr[k++]=l;
        

    }
    return arr;
    
}