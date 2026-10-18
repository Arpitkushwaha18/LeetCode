bool judgeCircle(char* moves) {
    int n = strlen(moves);
    int freq[4]={0};
    for(int i =0;i<n;i++){
        if(moves[i]=='R'){
            freq[0]++;
        }if(moves[i]=='L'){
            freq[1]++;
        }
        if(moves[i]=='U'){
            freq[2]++;
        }
        if(moves[i]=='D'){
            freq[3]++;
        }
        
    }
    if(freq[0]==freq[1]&&freq[2]==freq[3]){
        return true;
    }
    return false;

    
}