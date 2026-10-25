

bool validMountainArray(int* arr, int arrSize){
    if(arrSize<3){
        return false;
    }
    int max=arr[0];
    int k;
    for(int i=1;i<arrSize;i++){
    

        if(arr[i]>max){
            max=arr[i];
            k=i;

        }

    }
    if(k==0||k==arrSize-1){
        return false;
    }
    for(int i=0;i<=k-1;i++){
        if(arr[i]>=arr[i+1]||arr[i]>max){
            return false;
        }
    }
    for(int i=k;i<arrSize-1;i++){
         if(arr[i]<=arr[i+1]||arr[i]>max){
            return false;
        }

    }
    return true;

}