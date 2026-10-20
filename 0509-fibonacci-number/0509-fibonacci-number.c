

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   // return fib(n-1)+fib(n-2);
   int n2=1;
   int n1=0;
   int fib =0;
   for(int i =1;i<n;i++){
    fib =n1+n2;
    n1=n2;
    n2=fib;

   }
   return fib;

}