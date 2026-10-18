int reverseBits(int n) {
    int *arr = malloc(32*sizeof(int));
    int top =0;
     for(int i =0;i<32;i++){
        arr[top]=n%2;
        n/=2;
        top++;
        

    }
    unsigned int result = 0;
    for(int i =0;i<top;i++){
        result = result*2+arr[i];
        


    }
    return result;
    
}