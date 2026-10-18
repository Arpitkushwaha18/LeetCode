// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long long h = n;
    long long l =1;
    
    
    while(l<=h){
        long long mid = (l+h)/2;
        if(isBadVersion(mid)==true&&isBadVersion(mid-1)==false){
            return mid;
        }
        else if(isBadVersion(mid)==false){
            l=mid+1;

        }
        else{
            h= mid-1;

        }
    }
    return 0;
    
}