int maxArea(int* height, int heightSize) {
    int i, j, max1,max2=0;
    for(i=0,j=heightSize-1;j>i;){
        if(height[i]>height[j]){
            max1=height[j]*(j-i);
            j--;
        }
        else{
            max1=height[i]*(j-i);
            i++;
        }
        if(max1>max2){
            max2=max1;
        }
    }
    return max2;
}
