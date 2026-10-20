int lengthOfLastWord(char* s) {
    int m = strlen(s);
    int c=0;
    int i =m-1;
    if(m==1){
        return 1;
    }
    while(s[i]==' '){
        i--;
    }
    
    for(int j=i;s[j]!=' ';j--){

        c++;
        if(j==0){
            break;
        }
    }
    return c;
    
}