char* reformatNumber(char* number) {
    if(number ==NULL){
        return NULL;
    }
    int m = strlen(number);
    char *arr = malloc((m+1)*sizeof(char));
   char  *arr2 = malloc((m+m/3+1)*sizeof(char));
    int k=0;
    for(int i=0;number[i]!='\0';i++){
        if(number[i]!='-'&&number[i]!=' '){
            arr[k++]= number[i];
        }
        
    }
    arr[k]='\0';
    int i=0;
    int j=0;
    
    while(k>4){
        arr2[j++]=arr[i++];
        arr2[j++]=arr[i++];
        arr2[j++]=arr[i++];
        arr2[j++]='-';
        k-=3;
    }
    if(k==4){
        arr2[j++] = arr[i++];
        arr2[j++] = arr[i++];
        arr2[j++] ='-';
        arr2[j++] = arr[i++];
        arr2[j++] = arr[i++];
    }
    else {
        
        while (k > 0) {
            arr2[j++] = arr[i++];
            k--;
        }
    }

    arr2[j] = '\0'; 
    return arr2;
   
    


    
}