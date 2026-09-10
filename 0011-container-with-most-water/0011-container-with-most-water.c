int maxArea(int* height, int heightSize) {
    
    

    int l=0;
    int r =heightSize-1;
    int max =0;
    int area;
    
    for(int i =0;i<heightSize;i++){
        int width = r-l;
        if(height[l]<height[r]){
            area = height[l]*width;


            l++;
        }
        else{
            area = height[r]*width;
            r--;
        }
        if(max<area){
            max =area;
        }
         




    }
    return max;



    
}