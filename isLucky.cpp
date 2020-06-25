bool isLucky(int n) {
    string num = to_string(n);
    int length = num.size()/2;
    string first = num.substr(0,length);
    string second = num.substr(length,length+length);
    int sum1=0;
    int sum2=0;
    for(int i = 0;i<first.size();i++){
        sum1+=int(first[i]);
    }

    for(int i = 0;i<second.size();i++){
        sum2+=int(second[i]);
    }
    if (sum1==sum2){
return true;
    }
return false;
}
