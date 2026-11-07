int heightChecker(int* heights, int heightsSize) {
    int temp[heightsSize];

    for(int i = 0; i < heightsSize; i++) {
        temp[i] = heights[i];
    }

    for(int i = 0; i < heightsSize; i++) {
        for(int j = i + 1; j < heightsSize; j++) {
            if(temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    int count = 0;

    for(int i = 0; i < heightsSize; i++) {
        if(heights[i] != temp[i]) {
            count++;
        }
    }

    return count;
}