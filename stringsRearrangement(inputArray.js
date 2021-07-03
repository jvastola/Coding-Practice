function stringsRearrangement(inputArray) {

  var length = inputArray.length,
      result = [inputArray.slice()],
      c = new Array(length).fill(0),
      i = 1, k, p

  while (i < length) {
    if (c[i] < i) {
      k = i % 2 && c[i]
      p = inputArray[i]
      inputArray[i] = inputArray[k]
      inputArray[k] = p
      ++c[i]
      i = 1
      check = inputArray.slice();

      var tot=0
      for(var d =0; d<check.length-1;d++){
         var count=0
          for(var f=0; f<check[0].length;f++){
                if(check[d][f] !=check[d+1][f])
                        count++
                }
            if(count==1) tot++
            else break
      }
      if(tot==check.length-1){
          return true
      }
      
    } else {
      c[i] = 0
      ++i
    }
  }
  return false;
}
