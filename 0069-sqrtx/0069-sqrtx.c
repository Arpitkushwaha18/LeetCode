int mySqrt(int x) {
    int sqrt =0;
    long long  i;


    if(x<2){
        return x;
    }
    
    for(i =1;i<x;i++){
        if((i*i)==x){
            sqrt= i;
            break;
        }
        else if((i*i)<x&&x<((i+1)*(i+1))){
            sqrt =i;
            break;
            

        }

    }
    return i;
    
}