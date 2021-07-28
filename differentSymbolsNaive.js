function differentSymbolsNaive(s) {

let myArrayWithNoDuplicates = [...s].reduce(function (accumulator, currentValue) {
  if (accumulator.indexOf(currentValue) === -1) {
    accumulator.push(currentValue)
  }
  return accumulator
}, [])

return myArrayWithNoDuplicates.length

}
