int mySqrt(int x) {
    


    if(x<2){
        return x;
    }
    
    int l=0;
    int h=x;
    int curr =0;
    while(l<=h){
        long long mid =(l+h)/2;
        long long  sqr = mid*mid;
        if(sqr==x){
            return mid;
        }
        else if(sqr<x){
            l=mid+1;
            curr=mid;
        }
        else{
            h=mid-1;
        }
    }
    return curr;
    
}