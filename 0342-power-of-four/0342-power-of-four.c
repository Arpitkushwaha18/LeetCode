bool isPowerOfFour(int n) {
    if(n<=0){
        return false;
    }
    if(n==1){
        return true;
    }
    int c=0;
    while(n>1){
        if(n%4!=0){
            c++;
            break;
        }
        n/=4;
    }
    return c==0;
    
}