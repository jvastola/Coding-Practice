function arrayMaxConsecutiveSum(inputArray, k) {
    max=0
    for(var i=0;i <k; i++)
        max+=inputArray[i]
    sum=max
    for(var j =0; j<=inputArray.length-k;j++){
            sum-=inputArray[j]
            sum+=inputArray[j+k]
         if(sum>max) max=sum; 
    }
    return max;
   
}
