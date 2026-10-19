int findComplement(int num) {
    int n=0;
    int c=0;
    int k = num;
    while(num>0){
        c++;
       
        num/=2;
    }
    n=pow(2,c)-1-k;
    return n;
    
}