int numJewelsInStones(char* jewels, char* stones) {
    int m = strlen(jewels);
    int n = strlen(stones);
    int c =0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(jewels[i]==stones[j]){
                c++;
            }
        }
    }
    return c;
    
}