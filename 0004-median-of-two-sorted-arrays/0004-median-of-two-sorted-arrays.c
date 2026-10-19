double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int sum = nums1Size+nums2Size;
    int *merged = malloc(sum*sizeof(int));
    int k=0;
    int i=0;
    int j=0;
    double median =0;

   while(i<nums1Size&&j<nums2Size){
    if(nums1[i]<=nums2[j]){
        merged[k++]=nums1[i++];
        
    }
    else{
        merged[k++]=nums2[j++];

    }


   }
   while(i<nums1Size){
    merged[k++]=nums1[i++];

   }
   while(j<nums2Size){
    merged[k++]=nums2[j++];

   }
   if(sum%2==1){
    median= merged[sum/2];

   }
   else{
    median=(merged[sum/2]+merged[(sum/2)-1])/2.0;
   }
   return median;
    
}