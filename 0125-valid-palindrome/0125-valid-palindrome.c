bool isPalindrome(char* s) {
    if(s==NULL){
        return NULL;
    }
    int m = strlen(s);
    int k=0;
   char  *arr=malloc((m+1)*sizeof(char));
    for(int i=0;s[i]!='\0';i++){
        if(isalnum(s[i])){
            arr[k++]=tolower(s[i]);
        }
    }
    arr[k]='\0';
    int h =k-1;
    for(int i =0;i<k/2;i++){
        if(arr[i]!=arr[h]){
            return false;
            

        }
        h--;
    }
    return true;
}