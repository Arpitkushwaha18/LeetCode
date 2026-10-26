bool areOccurrencesEqual(char* s) {
    int hash[26]={0};
    for(int i=0;s[i]!='\0';i++){
        hash[s[i]-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(hash[i]!=0){
            max=hash[i];
            break;
        }

    }
    int c=0;
    for(int i=0;i<26;i++){
        if(hash[i]==max||hash[i]==0){
            c=0;
        }
        else{
            c++;
            break;
        }
    }
    return c==0;

}