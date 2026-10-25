/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int k=nums1Size;
    if(nums2Size>nums1Size){
        k=nums2Size;
    }
    
    int* arr= malloc((k+1)*sizeof(int));
    int arrhash[1001]={0};
    for(int i=0;i<nums1Size;i++){
        arrhash[nums1[i]]++;

    }
    int x=0;
     
   for(int i=0;i<nums2Size;i++){
    if(arrhash[nums2[i]]>0){
        arr[x++]=nums2[i];
        arrhash[nums2[i]]=0;

    }
   }
   *returnSize=x;
    return arr;

}