/*
void moveZeroes(int* nums, int numsSize) {
    int i,j,t;
    for(i=numsSize-1;i>=0;i--){
        if(nums[i]==0){
            for(j=i;j<numsSize-1;j++){
                t=*(nums+j);
                *(nums+j)=*(nums+j+1);
                *(nums+j+1)=t;
            }
        }
    }
}
*/
void moveZeroes(int* nums, int numsSize) {
    int i,j,t;
    for(i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[j] = nums[i];
            j++;
        }
    }
    for(;j<numsSize;j++){
        nums[j]=0;
    }
}

