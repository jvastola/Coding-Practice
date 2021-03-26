function depositProfit(deposit, rate, threshold) {
    count=0;
    while(deposit<threshold){
        deposit=deposit*(1+rate/100);
        count++;
    }
    return count;
}
