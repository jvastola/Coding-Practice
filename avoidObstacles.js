function avoidObstacles(inputArray) {
	let step = 2;
  var is = true;
  while(is) {
  	step++;
  	is = inputArray.some(item=>item % step == 0);
  }
  return step;
}
