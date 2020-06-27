std::vector<int> sortByHeight(std::vector<int> a) {
    vector<int> b = a;
    sort(b.begin(),b.end());
    int bindex = 0;
     for (int i = 0; i<b.size();i++){
        if(b[i]== -1){
            bindex++;
        }
    }
    for (int i = 0; i<b.size();i++){
        if(a[i]!= -1){
            a[i]=b[bindex];
            bindex++;
        }
    }
    return a;
}
