bool canConstruct(char* ransomNote, char* magazine) {
    
    int freq[26]={0};
    for(int i =0;magazine[i]!='\0';i++){
        freq[magazine[i]-97]++;
    }
    for(int i =0;ransomNote[i]!='\0';i++){
        
            freq[ransomNote[i]-97]--;
        
        
    }
    for(int i =0;ransomNote[i]!='\0';i++){
        if(freq[(ransomNote[i]-97)]<0){
            return false;
        
        }
    }

    return true;

    
}