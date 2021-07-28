function extractEachKth(inputArray, k) {

   var c=k-1
    while (c<inputArray.length){
        inputArray.splice(c,1)
        c=c+k-1
    }
return inputArray
}
