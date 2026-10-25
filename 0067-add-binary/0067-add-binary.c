char* addBinary(char* a, char* b) {
    int i=strlen(a)-1;;
    int j=strlen(b)-1;
    int c=i+3;
    if(i<j){
        c=j+3;
    }
    char* arr =malloc(c*sizeof(char));
    int carry=0;
    int k=0;
    while(i>=0||j>=0||carry!=0){
        int sum=carry;
        if(i>=0){
            sum+=a[i--]-'0';

        }
        if(j>=0){
            sum+=b[j--]-'0';
        }
        arr[k++]=(sum%2)+'0';
        carry=sum/2;
    }

    arr[k]='\0';
    for(int l=0,r=k-1;l<r;l++,r--){
        char temp=arr[r];
        arr[r]=arr[l];
        arr[l]=temp;
    }
    return arr;

    

   
}