

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfLines(int* widths, int widthsSize, char * s, int* returnSize){
int sum =0;
int m= strlen(s);
int x =1;

int *result=malloc(2*sizeof(int));
if(result==NULL){
    *returnSize=0;
    return NULL;
}
for(int i=0;i<m;i++){
    int word = widths[(int)s[i]-97];
    if((sum+word)>100){
        x++;
        sum=word;
    }
    else{
        sum+=word;
    }
    


}
result[0]=x;
result[1]=sum;
*returnSize =2;
return result;


}