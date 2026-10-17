
 
int* constructRectangle(int area, int* returnSize) {
    int *arr = malloc(2*sizeof(int));
    
 
  int w = (int)sqrt(area);
  while(area%w!=0){
    w--;
  }
  int l = area/w;
  arr[0]=l;
  arr[1]=w;
 *returnSize =2;
 return arr;


    
}