

void   merge(int* nums,int l,int mid,int h){
    int temp[h-l+1];
    int i =l;
    int j =mid+1;
    int k=0;
    while(i<=mid&&j<=h){
        if(nums[i]<=nums[j]){
            temp[k++]=nums[i++];
        }
        else{
            temp[k++]=nums[j++];
        }
    }
    while(i<=mid){
        temp[k++]=nums[i++];
    }
    while(j<=h){
        temp[k++]=nums[j++];
    }
    for(int i =l,k=0;i<=h;i++,k++){
        nums[i]=temp[k];
    }
    


}
void mergeSort(int* nums,int l,int h){
    if(l<h){
    int mid = (l+h)/2;
   
    mergeSort(nums,l,mid);
    mergeSort(nums,mid+1,h);
     merge(nums,l,mid,h);
     }


}




bool containsDuplicate(int* nums, int numsSize){

    mergeSort(nums,0,numsSize-1);
    int c=0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            c++;
        };
    }
    return c>0;
    


    
}