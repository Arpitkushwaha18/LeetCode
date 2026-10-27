bool isPerfectSquare(int num) {
    if(num==1){
        return true;
    }
    int l=1;
    int r=num/2;
    if(r>46340){
        r=46340;
    }
    while(l<=r){
        int mid=(l+r)/2;
        long long int m=(long long int)mid*mid;
        if(m==num){
            return true;
        }
        else if(m<num){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return false;

    
}