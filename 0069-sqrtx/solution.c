int mySqrt(int x) {
    long long i;
    for(i=0;i<=x;i++){
        
        if((i*i)==x)
            return i;
        if( x>0  && (i*i)>x)
            return i-1;
    }
    return 0;
    
}
