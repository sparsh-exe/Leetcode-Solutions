int smallestNumber(int n, int t) {
    int p,i,tn,k;
    k = n+10;
    for(i=n;i<k;i++){
        p=1;
        tn = i;
        while(tn>0){
            p = p*(tn%10);
            tn /= 10;
        }
        if(p%t==0)
            break;
    }
    return i;
    
}
