bool areSimilar(std::vector<int> a, std::vector<int> b) {
    std::vector<int> s1={0,0,0,0,0,0,0,0,0,0};
   std::vector<int> s2={0,0,0,0,0,0,0,0,0,0};
   int count = 0;
   int num1=-1;
    int num2=-1;
    int num3=-1;
    int num4=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            count ++;
            if(count==1){
                num1= a[i];
                num2=b[i];
            }
            if(count==2){
                num3= a[i];
                num4=b[i];
            }
        } 
    }
    if(count>2){
       return false;
    }
    if(num1!=num4 ||num2!=num3){
        return false;
    }
    return true;
}
