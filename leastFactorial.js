function leastFactorial(n) {
    ct=1;
    ct2=1;
    while(n>ct){
        ct=ct*(ct2);
        ct2++
    }
    return ct;
}

