int lengthOfLongestSubstring(char* s) {
    int arr[256]={0};
    int length =0;
    int l=0;
    
    for(int r=0;s[r]!='\0';r++){
        
    
        while(arr[s[r]]>0){
            arr[s[l]]--;
            l++;

        }
        arr[s[r]]++;
        
        int curr=r-l+1;
        if(curr>length){
            length=curr;
        }

    }
    return length;
}