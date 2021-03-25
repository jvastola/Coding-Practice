function chessBoardCellColor(cell1, cell2) {

var1= (cell1.charCodeAt(0) - 65+cell1.charCodeAt(1)-49)
var2=  (cell2.charCodeAt(0) - 65+cell2.charCodeAt(1)-49)

if(var1%2){
    if(var2%2)
    return true;
}
else if(var2%2==0){
    return true;
}
return false

}
