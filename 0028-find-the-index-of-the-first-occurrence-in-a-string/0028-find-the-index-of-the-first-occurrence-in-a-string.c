int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);
    for(int i =0;i<n;i++){
        if(haystack[i]==needle[0]){
        int x =i;
        int j;
        for( j=0;j<m;j++){
            if(haystack[x]==needle[j]){
                x++;
            }
            else{
                break;
            }
            
            
        }
        if(j==m){
            return i;
        }

    }}
    return -1;
    
    
}