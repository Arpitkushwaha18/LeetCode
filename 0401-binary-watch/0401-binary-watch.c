/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int binary(int n){
    
        
        int s=0;
       
        while(n>0){

            
            if(n%2==1){
            s +=1;
            }
    
            n/=2;

        }
        return s;

        
 }
 
char** readBinaryWatch(int turnedOn, int* returnSize) {
    char **arr = malloc(252*sizeof(char*));
    int k =0;
    for(int i =0;i<=11;i++){
        int c1= binary(i);

        
        for(int j =0;j<=59;j++){
            int c2 = binary(j);
            if((c1+c2)==turnedOn){
                arr[k] = malloc(6 * sizeof(char));
                snprintf(arr[k],6,"%d:%02d",i,j);
            
    //        if(i>=10){
    //        arr[k][0]= (char)(i/10+'0');
    //        arr[k][1]= (char)(i%10+'0');
    //        arr[k][2]=':';
    //        if(j<10){
    //            arr[k][3]='0';
    //            arr[k][4]=(char)(j+'0');
    //            arr[k][5]='\0';
    //        }
    //        else{
    //            arr[k][3]= (char)(j/10+'0');
    //            arr[k][4]= (char)(j%10+'0');
    //            arr[k][5]='\0';

    //        }
    //    
    //    else{
    //        arr[k][0]= (char)(i+'0');
    //        arr[k][1]=':';
    //        if(j<10){
    //            arr[k][2]='0';
    //            arr[k][3]=(char)(j+'0');
    //            arr[k][4]='\0';
    //        }
    //        else{
    //            arr[k][2]= (char)(j/10+'0');
    //            arr[k][3]= (char)(j%10+'0');
    //            arr[k][4]='\0';

    //        }
    //    }
            k++;
            

            
            }
        


        }
    }
    *returnSize =k;
    return arr;


    
}