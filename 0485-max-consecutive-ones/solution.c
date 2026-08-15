int findMaxConsecutiveOnes(int* nums, int n) {
    int i,c=0,max=0;
    for(i=0 ; i<n; i++){
        if(nums[i]==1){
            c++;
            if(c>max)
                max = c;
        }
        else
            c = 0;
    }
    return max;
}
