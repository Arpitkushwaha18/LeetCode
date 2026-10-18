int titleToNumber(char* columnTitle) {
    int n = strlen(columnTitle);
    int out =0;
    
    int x = n-1;
    for(int i =0;i<n;i++){
        int m = ((int)columnTitle[i])-64;
        out+=m*pow(26,x);
        x--;


    }
    return out;
    
}