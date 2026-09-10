int maxProfit(int* prices, int pricesSize) {
    int max=0;
    
    int l= 0;
    
    int profit =0;
    for(int i =1;i<pricesSize;i++){


      if(prices[l]>prices[i]){
        l=i;
    } 
    else{
        profit = prices[i]-prices[l];
        if(max<profit){
            max = profit;
        }
    }



    }
    return max;

    
}