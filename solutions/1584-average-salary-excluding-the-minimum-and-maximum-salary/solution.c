double average(int* salary, int salarySize) {
    int i, max, min;
    double avg = 0;
    max = salary[0];
    min = salary[0];
    for(i=1;i<salarySize;i++){
        if(salary[i]>max)
            max = salary[i];
        if(salary[i]<min)
            min = salary[i];
    }
    for(i=0;i<salarySize;i++){
        if(salary[i]==max || salary[i]==min)
            continue;
        avg = avg+salary[i];
    }
    avg = avg/(salarySize-2);
    return avg;
}
