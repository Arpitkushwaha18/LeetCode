/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int selfdivide(int n){
    int x=n;
    while(x>0){
        int m=x%10;
        if(m==0||n%m!=0){
            return 0;
        }
        x/=10;
       
    }
    return 1;
}
int* selfDividingNumbers(int left, int right, int* returnSize) {

    int *arr =malloc((right-left+1)*sizeof(int));
    int k=0;
    for(int i=left;i<=right;i++){
        if(selfdivide(i)){
            arr[k++]=i;
        }
    }
    *returnSize=k;
    return arr;

    
}