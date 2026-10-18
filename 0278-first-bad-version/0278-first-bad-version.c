// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long long h = n;
    long long l =1;
    
    
    while(l<h){
        long long mid = (l+h)/2;
        if(isBadVersion(mid)){
            h= mid;}
            else{
            
        l = mid+1;

        }
    }
    return l;
    
}