/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double * result = malloc(2*sizeof(double));
    double kelvin = celsius+273.15;
    double farhen = (celsius*1.80)+32.00;
    result[0] = kelvin;
    result[1]=  farhen;
    *returnSize =2;
    return result;


    
}