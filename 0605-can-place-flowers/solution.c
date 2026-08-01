bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i,c=0;
    if(flowerbedSize>1&&flowerbed[0]==0&&flowerbed[1]==0){
        flowerbed[0]=1;
        c++;
    }
    if(flowerbedSize>1 && flowerbed[flowerbedSize-1]==0&&flowerbed[flowerbedSize-2]==0){
        flowerbed[flowerbedSize-1]=1;
        c++;
    }
    if(flowerbedSize==1&&flowerbed[0]==0){
        flowerbed[0]==1;
        c++;
    }
    for(i=1;i<flowerbedSize-1;i++){
        if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i-1]==0 ){
            flowerbed[i]=1;
            c++;
        }
    }
    if(c>=n)
        return true;
    else
        return false;
}
