bool almostIncreasingSequence(std::vector<int> sequence) {
    int count = 0;
    int count2= 0;
    for(int i=0;i<sequence.size()-1;i++){
        if(sequence[i] >=sequence[i+1]){
            std::vector<int> sequence2= sequence;
            sequence2.erase (sequence2.begin()+i+1);
                for(int j=0;j<sequence2.size()-1;j++){
                    if(sequence2[j] >=sequence2[j+1]){
                        count++;
                        cout << sequence2[j];
                    }
                }
            sequence.erase(sequence.begin()+i);
                for(int j=0;j<sequence.size()-1;j++){
                    if(sequence[j] >=sequence[j+1]){
                        count2++;
                        cout << sequence[j];
                    }
                }
            
        }
        
       
    }

    if (count>=1 && count2>=1){
        return false;
    }

    return true;
}
