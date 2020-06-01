int shapeArea(int n) {
    int sum=1;
    for(int i=1;i<n;i++){
        sum=sum+4*i;
    }
    return sum;

}
