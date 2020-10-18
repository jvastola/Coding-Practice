function arrayReplace(inputArray, elemToReplace, substitutionElem) {
    var i
    for (i = 0; i < inputArray.length; i++) {
  if(inputArray[i]==elemToReplace){
            inputArray[i]=substitutionElem
        }
}
    return inputArray
}
