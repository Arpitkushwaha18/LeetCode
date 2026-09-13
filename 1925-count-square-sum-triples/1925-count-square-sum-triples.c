int countTriples(int n) {
    int count =0;
    
for(int j=1;j<=n;j++){
    for(int k=j+1;k<=n;k++){
        
            int a = j*j+k*k;
            int c = sqrt(a);
            if(c*c==a&&c<=n){
                count+=2;
            
        }
    }
}
return count;
    
}