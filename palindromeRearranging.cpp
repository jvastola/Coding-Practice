bool palindromeRearranging(std::string inputString) {
    int ve[26]={0};
    int count=0;
    for(int i=0;i<inputString.length();i++){
        ve[inputString[i]-'a']++;
    }
    for(int j=0;j<26;j++){
        if(ve[j]%2==1){
            count++;
        }
    }
    if(count>1){
        return false;
    }
    return true;
}
