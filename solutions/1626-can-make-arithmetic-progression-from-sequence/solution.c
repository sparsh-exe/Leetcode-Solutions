int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool canMakeArithmeticProgression(int* arr, int arrSize) {
    int temp, i, diff;
    i=0;
    qsort(arr, arrSize, sizeof(int), compare);
    diff = arr[1]-arr[0];
    
    for(i=1;i<(arrSize-1);i++){
        if((arr[i+1]-arr[i])!=diff)
            return false;
    }
    return true;
}
