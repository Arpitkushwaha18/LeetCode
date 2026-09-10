int reverse(int x){
    long rev=0 ;
    long temp=x;
        if (temp<0){
            temp*=-1;
        };

    while(temp>0){
        int digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    if (rev > 2147483647 || rev < -2147483648LL)
        return 0;
    if(x<0){
        rev*=-1;
    }
    return rev;

}