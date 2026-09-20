int arraySign(int* nums, int numsSize) {
    int i, p=1;
    for(i=0;i<numsSize;i++){
        if(nums[i]<0)
            p=p*-1;
        else if(nums[i]>0)
            p=p*1;
        else if(nums[i]==0)
            return 0;
    }
    return p;
}
