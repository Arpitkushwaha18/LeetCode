int diagonalSum(int** mat, int matSize, int* matColSize) {

    int sum=0;
    for(int i=0;i<matSize;i++){
        for(int j=0;j<matColSize[i];j++){
            if(i==j){
                sum+=mat[i][j];

            }

        }
    }
    int j;

    for(int i=matSize-1,j=0;i>=0;i--,j++){
        if(i!=j){
        sum+=mat[i][j];
        }


    }
    

    return sum;

    
}