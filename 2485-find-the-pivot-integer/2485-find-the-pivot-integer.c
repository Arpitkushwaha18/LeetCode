int pivotInteger(int n) {

  int sum=(n*(n+1))/2;
  int currsum=0;
  for(int i=n;i>0;i--){
    currsum+=i;
    if(currsum==sum){
        return i;
    }
    
    sum-=i;

  }
  return -1;
}