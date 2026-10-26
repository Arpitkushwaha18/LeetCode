int minimumSum(int num) {
    
     int arr[4];

    for (int i = 0; i < 4; i++) {
        arr[i] = num % 10;
        num = num / 10;
    }
   
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[0] * 10 + arr[2] +10 *arr[1] + arr[3];
   

}