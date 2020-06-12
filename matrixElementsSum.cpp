int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int zeros[matrix.size()];
    int sum=0;
    for(int i =0; i< matrix.size();i++){
        for( int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                zeros[j]=1;
            }
            if(zeros[j]!=1){
                sum+=matrix[i][j];
            }
        }
    }
    return sum;
}
