int largestAltitude(int* gain, int gainSize) {
    int* arr= malloc((gainSize+1)*sizeof(int));
    arr[0]=0;
    int k=1;
    int sum =0;
    for(int i=0;i<gainSize;i++){
        sum+=gain[i];
       
        arr[k++]=sum;
        
        
    }
    int max=0;
    for(int i=1;i<k;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;

    
}