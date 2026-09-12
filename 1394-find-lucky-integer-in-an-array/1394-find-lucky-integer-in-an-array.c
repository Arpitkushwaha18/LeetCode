int findLucky(int* arr, int arrSize) {
    int freq[501]={0};
    for(int i =0;i<arrSize;i++){
        freq[arr[i]]++;
    }
    int max =0;
    for(int i =0;i<501;i++){
        if(freq[i]==i){
            if(freq[i]>max){
                max= freq[i];
            }
        }

    }
    if(max==0){
        return -1;
    }
    return max;
    
    
}