char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int diff=27;
    char ans = letters[0];

    for(int i=0;i<lettersSize;i++){
        if(letters[i]!=target&&(int)letters[i]>(int)target){
            if(diff>(int)letters[i]-(int)target){
            diff=letters[i]-target;
            ans=letters[i];
            }
        }



    }
    
    return ans;
    
}