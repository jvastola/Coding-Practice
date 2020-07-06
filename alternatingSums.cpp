std::vector<int> alternatingSums(std::vector<int> a) {
    std::vector<int> b;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<a.size();i++){
        if((i+1)%2==1){ 
            sum1+=a[i];
        }
        else{
            sum2+=a[i];
        }
    }
    b.push_back(sum1);
    b.push_back(sum2);
    return b;
}
