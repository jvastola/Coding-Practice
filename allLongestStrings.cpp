std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    std::vector<std::string> output;
    int length = 0;
    for(int i =0;i<inputArray.size();i++){
        if(inputArray[i].size()>length){
            output.clear();
            length=inputArray[i].size();
        }
        if(inputArray[i].size()==length){
            output.push_back(inputArray[i]);
        }
    }
    return output;
}
