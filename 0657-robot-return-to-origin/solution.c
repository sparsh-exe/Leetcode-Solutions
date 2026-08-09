bool judgeCircle(char* moves) {
    int i, x, y;
    x=0;
    y=0;
    for(i=0;moves[i]!='\0';i++){
        if(moves[i]=='U')
            x++;
        if(moves[i]=='D')
            x--;
        if(moves[i]=='L')
            y--;
        if(moves[i]=='R')
            y++;
    }
    if((x==0) && (y==0))
        return true;
    return false;
}
