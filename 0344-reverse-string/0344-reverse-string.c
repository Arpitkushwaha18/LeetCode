void reverseString(char* s, int sSize) {
    int r;

    for(int l=0,r=sSize-1;l<r;l++,r--){
        char temp=s[l];
        s[l]=s[r];
        s[r]=temp;

    }
    return ;
    
}