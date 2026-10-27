int hammingDistance(int x, int y) {
    int c=0;

    while(x>0&&y>0){
        if(x%2!=y%2){
            c++;
        }
        x/=2;
        y/=2;
        }
    while(x>0){
        if(x%2!=0){
            c++;
        }
        x/=2;
    }
    while(y>0){
        if(y%2!=0){
            c++;
        }
        y/=2;
    }
    return c;
    
}