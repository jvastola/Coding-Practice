std::vector<std::string> addBorder(std::vector<std::string> picture) {
    std::vector<std::string> ret;
    string s1="";
    for(int i=0;i<picture[0].length()+2;i++){
        s1+="*";
    }
    
    ret.push_back(s1);
    for(int i=0;i<picture.size();i++){
        picture[i]="*"+picture[i]+"*";
        ret.push_back(picture[i]);
    }
    ret.push_back(s1);
    return ret;
}
