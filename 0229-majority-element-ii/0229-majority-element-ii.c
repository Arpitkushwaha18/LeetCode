/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* majorityElement(int* nums, int numsSize, int* returnSize) {
    int candidate1;
    int candidate2;
    int count1=0;
    int count2=0;

    int *result = malloc(2*sizeof(int));
    for(int i =0;i<numsSize;i++){
        
       
        if(count1>0&&nums[i]==candidate1){
            
            count1++;
            
        }
        else if(count2>0&&nums[i]==candidate2){
        
            count2++;
            
        }
         else if (count1 == 0) {
            candidate1 = nums[i];
            count1 = 1;
        }
        else if (count2 == 0) {
            candidate2 = nums[i];
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }
    int t= numsSize/3 +1;
    int c1=0;
    int c2=0;
    

for (int i = 0; i < numsSize; i++) {
    if (count1 > 0 && nums[i] == candidate1) {
        c1++;
    }
    else if (count2 > 0 && nums[i] == candidate2) {
        c2++;
    }
}
    int s =0;
    if(c1>=t&&c2<t){
        result[0]=candidate1;
        s=1;
    }
    else if(c2>=t&&c1<t){
        result[0]=candidate2;
        s=1;
    }
    else if(c2>=t&&c1>=t){
        result[0]=candidate1;
        result[1]=candidate2;
        s =2;
    }

    *returnSize =s;
    return result;

    
}