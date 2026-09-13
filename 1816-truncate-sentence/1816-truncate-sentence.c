char* truncateSentence(char* s, int k) {
    int m = strlen(s);
    int j =0;
    char *result = malloc((m+1)*sizeof(char));
    for(int i =0;i<m;i++){
    
            
            if(s[i]==' '){
                k--;
            }
            if(k==0){
                break;
            }
            result[j++]=s[i];

        
    }
    result[j]='\0';
    return result;
    
}